#define msg

#include "icmake.ih"

void compile()
{
    if (!(flags & f_doCompile))         /* no compilation requested: leave */
        return;

    int ret = spawnlp(WAIT, icm_comp, icm_comp, pimFile, bimFile, NULL);

    if (flags & f_rmPim)
        unlink(pimFile);

    if (ret)
    {
        flags |= f_rmBim;

        if (ret == -1)
            rss_spawnErr(icm_comp);

        exit(1);
    }
}
