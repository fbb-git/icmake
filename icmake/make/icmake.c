/*
                         I C M A K E . C
*/

#include "icmake.h"

static char
    bim[]       = "bim",
    icm_comp[]  = LIBDIR "/icm-comp",
    icm_exec[]  = LIBDIR "/icm-exec",
    icm_pp[]    = LIBDIR "/icm-pp",
    pim[]       = "pim";

int main (                         /* icmake source(txt) dest(bin) */
    int argc,
    char **argv)
{
    register int
        argc2,
        ret;
    char
        *prog;

    argc2 = options(argv, &argc);           /* process options */
                                            /* argc2 is index of args to
                                               icm-exec
                                            */

    if (!(flags & f_quiet))
        copyright("Make Utility", version, release);

    prog = program_name(argv[0]);

    if (!(flags & f_icmake) && argc2 == 1)  /* argv[1]: already for icm-exec */
        error
        (
            "%s%s%s%s%s",

            "Icmake by Frank B. Brokken (and Karel Kubat until V 6.30).\n"
            "\n"
            "Usage: ",
                prog,
            " [flags] source[.im] [dest[.bim]] [-- [args]]\n"
            "where:\n"
            "\tflags:  optional flags:\n"
            "\t\t-a     : information about ",
                prog,
            "\n"
            "\t\t-b     : blunt execution of the destinationfile\n"
            "\t\t-c     : the destination file is compiled\n"
            "\t\t-i file: 'file': name of source, argument processing stops\n"
            "\t\t-p     : only the preprocessor is activated\n"
            "\t\t-q     : quiet mode: copyright banner not displayed\n"
            "\t\t-t file: 'file' is used as a temporary bim-file, to be "
                                                                "removed\n",

            "\t\t         on exit. Argument processing stops.\n"
            "\tsource: make description source file (default extension: .im)\n"
            "\tdest:   binary make file             (default:    source.bim)\n"
            "\t        (not used with the -t option)\n"
            "\t-- :   optional icmake-file arguments separator\n"
            "\targs:  optional arguments following -- received by\n"
            "\t       the icmake file in its argv-list"
        );

    if (!(flags & f_icmake))                /* do not take source literally */
    {
        source_name = try_source(argv[1]);  /* determine source */

        if (!(flags & f_tmpbim))            /* unless it's a temp. bimfile */
            dest_name = argc2 >= 3 ? argv[2] : argv[1];
    }
    else if (!(flags & f_tmpbim))           /* unless it's a temp. bimfile */
        dest_name = source_name;

    if (!(flags & f_tmpbim))                /* adapt extension of destination */
        dest_name = xstrdup(change_ext(dest_name, bim)); /* if not tmp. bimfile */

    if
    (
        !(flags & f_blunt)                  /* no forced execution */
        &&
        compile_test()                      /* compilation needed */
    )
    {
                                            /* preprocessor filename */
        if (!(flags & f_tmpbim))            /* use .pim unless -t given */
            temporary = xstrdup(change_ext(source_name, pim));

        signal(SIGINT, abnormal_exit);      /* abnormal exits process */
                                            /* do the preprocessing */
        ret = _spawnlp(P_WAIT, icm_pp, icm_pp, source_name, temporary, NULL);
        if (ret)
        {
            if (ret == -1)
                spawn_err(icm_pp);
            cleanup();
            return (1);
        }

        if (flags & f_preprocessor)
            return (0);

                                            /* do the compilation */
        errors = _spawnlp(P_WAIT, icm_comp, icm_comp,
                                  temporary, dest_name, NULL);
        cleanup();

        if (errors)
        {
            if (errors == -1)
                spawn_err(icm_comp);
            return (1);
        }

        if (flags & f_compiler)
            return (0);
    }

    if (flags & f_tmpbim)                       /* -t used */
    {
        argc2 -= 3;                             /* set index to start of args */
        argv[argc2 + 1] = "-t";                 /* signal temporary */
        argv[argc2 + 2] = (char *)dest_name;    /* store dest-name */
    }
    else
    {
        argc2 -= 2;                             /* set index to start of args */
        argv[argc2 + 1] = (char *)dest_name;    /* store dest-name */
    }
    argv[argc2] = icm_exec;                     /* store executor's name */

                                            /* do the making of the file */
    errors = _execvp(icm_exec, &argv[argc2]);

    spawn_err(icm_exec);                    /* shouldn't get here ... */

    cleanup();                              /* remove tempfiles etc. */
    return (1);
}
