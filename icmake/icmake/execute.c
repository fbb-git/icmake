#define msg

#include "icmake.ih"

void execute(char **argv)  
{
    if (!(flags & f_doExec))        /* no exec is requested: leave */
        return;

    if (execArgIdx == 0)            /* icm-exec only receives arguemtns if */
        *argv = 0;                  /* execArgIdx refers to the first one  */

    *--argv = bimFile;              /* set the bim-file to use */

    if (flags & f_rmBim)
    {
        *--argv = "-t";             /* set -t flag for icm-exec */
        flags &= ~f_rmBim;          /* icmake itself doesn't remove bim */
    }

    *--argv = icm_exec;             /* icm-exec is called */
        
    execvp(*argv, (char *const *)argv);

    rss_spawnErr(icm_exec);
}



