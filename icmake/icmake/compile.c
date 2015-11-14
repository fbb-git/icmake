#define msg

#include "icmake.ih"

void compile()
{
    if (!(flags & f_doCompile))         /* no compilation requested: leave */
        return;

    int ret = spawnlp(P_WAIT, icm_comp, icm_comp, pimFile, bimFile, NULL);

    if (ret)
    {
        flags |= f_rmBim;

        if (ret == -1)
            rss_spawnErr(icm_comp);

        exit(1);
    }
}
