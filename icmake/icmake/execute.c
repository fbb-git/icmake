#include "icmake.ih"

                                    /* argv is passed to bim-name, if       */
                                    /* temporary == 1 also pass -t          */
void execute(int tempBim, char const *source, char **argv)  
{                                                   /* bim-name             */
    bimFile = tryFile(source, "bim");

    argv -= (tempBim + 1);          /* room for icm-exec [-t] */

    *argv = (char *)icm_exec;

    if (tempBim)
    {
        flags |= f_rmBim;
        argv[1] = "-t";
    }

    execvp(*argv, (char *const *)argv);

    rss_spawnErr(icm_exec);
}

