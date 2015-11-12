#include "icmake.ih"

                                    /* argv is passed to bim-name, if       */
                                    /* temporary == 1 also pass -t          */
void execute(int temporary, char const **argv)  
{                                                   /* bim-name             */
    *argv = tryFile(*argv, "bim");

    argv -= (temporary + 1);        /* room for icm-exec [-t] */

    *argv = icm_exec;

    if (temporary)
        argv[1] = "-t";

    execvp(*argv, argv);
    rss_spawnErr(icm_exec);
}

