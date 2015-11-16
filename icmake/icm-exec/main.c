/*
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
*/

#include "icm-exec.h"
#include "var/var.h"

int main(int argc, char **argv)
{
    int idx;

    atexit(cleanup);
    signal(SIGINT, (void (*)(int))abnormal);

    if (argc == 1)
    {
        register char *program = rss_programName(argv[0]);

        rss_copyright(program);

        printf ("This program is run as a child process of icmake.\n"
                "Usage: %s [-t] bimfile\n"
                "where: -t      - option indicating that 'bimfile' must be\n"
                "                 removed on exit.\n"
                "       bimfile - binary makefile to execute.\n\n"
            , program);

        return 1;
    }

    getcwd(orgdir, MAX_PATHLEN);          /* initialize the CWD */

    if (!strcmp(argv[1], "-t"))           /* -t option found */
    {
        argv[1] = argv[0];                /* remove the -t argument */
        argv++; 
        argc--; 
        bimname = argv[1];              /* define temporary name */
    }

    if (!(infile = fopen (argv [1], "r")))
        rss_error("cannot open bimfile '%s' to read", argv[1]);

    headerp = rss_readHeader(infile, (size_t)version[0]);

                                        /* return array of global vars */
    if ((int16_t)(nvar = rss_getVar(infile, headerp, &var)) == -1)
        rss_error("invalid macro file, cannot read variable section");

        /* global string/list variables haven't been initialized by */
        /*  the compiler, so that's icm-exec's job                  */
    for (idx = 0; idx != nvar; ++idx)
    {
        switch (typeValue(var + idx))
        {
            case e_str:
                var[idx] = *stringConstructor();
            break;

            case e_list:
                var[idx] = *listConstructor();
            break;
        }
    }

    fseek(infile, headerp->offset[3], SEEK_SET);

    {
        ListVariable env = *listConstructor();

        environ2list(&env);
        push(&env);             /* envp: 3rd arg of main() */
        listDestructor(&env);
    }

    {
        ListVariable args = *listConstructor_s_cPP((size_t)argc, argv);
        push(&args);            /* argv: 2nd arg of main() */
        listDestructor(&args);
    }

    {
        IntVariable nArgs = *intConstructor_i(argc - 1);
        push(&nArgs);           /* argc: 1st arg of main() */
    }

    opcodefun_process();

    return retval;
}

