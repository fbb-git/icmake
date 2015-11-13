#define msg

#include "icmake.ih"

                                    /* argv is passed to bim-name, if       */
                                    /* temporary == 1 also pass -t          */
void execute(int tempBim, char const *source, char **argv)  
{                                                   /* bim-name             */
    argv -= (tempBim + 1);          /* room for icm-exec [-t] */

    *argv = (char *)icm_exec;

    if (tempBim)
    {
        flags |= f_rmBim;
        argv[1] = "-t";
    }

    for (char **cp = argv; *cp; ++cp)
        printf("%s ", *cp);
    putchar('\n');

    execvp(*argv, (char *const *)argv);

    rss_spawnErr(icm_exec);
}



