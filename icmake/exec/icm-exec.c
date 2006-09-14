/*
\funcref{main}{void main (\params)}
    {
        {int} {argc} {argument count}
        {char} {**argv} {array of arguments}
        {char} {**envp} {array of environment settings}
    }
    {}
    {getvar(), process(), envp2list(), newvar()}
    {}
    {icm-exec.c}
    {

        The {\em main()} function opens the binary makefile, reads the offsets
        of the variables and strings sections, calls {\em getvar()} to retrieve
        the variables, pushes {\em argc}, {\em argv} and {\em envp}
        onto the {\em icmake}
        stack and then calls {\em process()} to execute the makefile.

        The exit value of {\em main()} is held in the global variable {\em
        retval} (see also {\em fun\_ret()}).

        Function {\em cleanup()} is attached to the `at-exit' list for DOS
        systems. This is necessary so that the startup working directory is
        restored. For UNIX systems, no {\em atexit()} list is created.

    }
*/

#ifdef MSDOS
#pragma comment (lib, "icmexec")
#pragma comment (lib, "../rss/icrss")
#endif

#include "icm-exec.h"

void main (argc, argv, envp)
int argc;
char **argv;
char **envp;
{
    register char
        *progname;
    register int
        i;
    VAR_
        tmp;

    atexit (cleanup);

    signal (SIGINT, (void (*)(int))abnormal);
    getcwd (orgdir, _MAX_PATH - 1);

   
    if (argc == 1)
    {
        copyright ("ICMAKE Binary Makefile Executor", version, release, 1);
        progname = program_name (argv [0]);
        printf ("This program is run as a child process of icmake.\n"
                "Usage: %s [-t] bimfile\n"
                "where: -t      - option indicating that 'bimfile' must be\n"
                "                 removed on exit.\n"
                "       bimfile - binary makefile to execute.\n\n"
            , progname);
        exit (1);
    }

    if (!strcmp(argv[1], "-t"))           /* -t option found */
    {
        argv[1] = argv[0];                /* remove the -t argument */
        argv++; 
        argc--; 
        bimname = argv[1];              /* define temporary name */
    }

    if (! (infile = fopen (argv [1], READBINARY)) )
        error ("cannot open bimfile '%s' to read", argv [1]);

    headerp = readheader (infile, version [0]);
    if ( (INT16)(nvar = getvar (infile, headerp, &var)) == -1 )
        error ("invalid macro file, cannot read variable section");

    fseek (infile, headerp->offset[3], SEEK_SET);

    push (envp2list (envp));

    tmp = newvar (e_list);
    for (i = 1; i < argc; i++)
        tmp = addtolist (tmp, argv [i]);
    push (tmp);

    tmp.type = e_int;
    tmp.vu.intval = argc - 1;
    push (tmp);

    process ();

    return retval;
}
