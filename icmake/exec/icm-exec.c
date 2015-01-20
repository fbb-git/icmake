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

#include "icm-exec.h"
#include "var/var.h"

int main (int argc, char **argv)
{
    int idx;
    register char *progname;

    atexit (cleanup);
    signal (SIGINT, (void (*)(int))abnormal);
    progname = getcwd (orgdir, _MAX_PATH - 1);  /* keeps the compiler happy */


    if (argc == 1)
    {
        copyright("ICMAKE Binary Makefile Executor", version, release);
        progname = program_name(argv[0]);
        printf ("This program is run as a child process of icmake.\n"
                "Usage: %s [-t] bimfile\n"
                "where: -t      - option indicating that 'bimfile' must be\n"
                "                 removed on exit.\n"
                "       bimfile - binary makefile to execute.\n\n"
            , progname);
        return 1;
    }

    if (!strcmp(argv[1], "-t"))           /* -t option found */
    {
        argv[1] = argv[0];                /* remove the -t argument */
        argv++; 
        argc--; 
        bimname = argv[1];              /* define temporary name */
    }

    if (!(infile = fopen (argv [1], READBINARY)))
        error("cannot open bimfile '%s' to read", argv[1]);

    headerp = readheader(infile, (size_t)version[0]);

                                        /* return array of global vars */
    if ((INT16)(nvar = getvar(infile, headerp, &var)) == -1)
        error("invalid macro file, cannot read variable section");

        /* global strings haven't been initialized by the compiler yet, */
        /* so that's icm-exec's job                                     */
    for (idx = 0; idx < nvar; ++idx)
    {
        if (typeValue(var + idx) == e_str)
            var[idx] = *stringConstructor();
    }

    fseek(infile, headerp->offset[3], SEEK_SET);

    {
        LISTVAR_ env = *listConstructor();

        environ2list(&env);
        push(&env);             /* envp: 3rd arg of main() */
        listDestructor(&env);
    }

    {
        LISTVAR_ args = *listConstructor_s_cPP((size_t)argc, argv);
        push(&args);            /* argv: 2nd arg of main() */
        listDestructor(&args);
    }

    {
        INTVAR_ nArgs = *intConstructor_i(argc - 1);
        push(&nArgs);           /* argc: 1st arg of main() */
    }

    process();

    return retval;
}







