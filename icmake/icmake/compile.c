#define msg

#include "icmake.ih"

void compile()
{
    bimFile = rss_changeExt(imFile, "bim");

    int ret = spawnlp(P_WAIT, icm_comp, icm_comp, pimFile, bimFile, NULL);

    if (ret)
    {
        if (flags & f_tmpBim)
            flags |= f_rmBim;

        if (ret == -1)
            rss_spawnErr(icm_comp);

        exit(1);
    }

    if (flags & f_compile)
        exit(0);
}
