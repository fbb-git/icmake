#include "icmake.ih"

int preProcess()
{
    temporary = rss_changeExt(source, "pim"));

    int ret = spawnlp(P_WAIT, icm_pp, icm_pp, source, temporary, NULL);

    if (ret)
    {
        if (ret == -1)
            rss_spawnErr(icm_pp);

        cleanup();
        exit(1);
    }

    if (flags & f_preprocess)
        exit(0);
}    
