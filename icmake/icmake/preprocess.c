#include "icmake.ih"

void preProcess(char const *arg2)
{
    if (flags & f_preprocess)
        pimFile = arg2;     /* may be NULL, resulting in .im->.pim below */
    else
        flags |= f_rmPim;   /* no explicit request, remove .pim at exit */

    if (pimFile == NULL)
        pimFile = rss_changeExt(imFile, "pim");

    int ret = spawnlp(P_WAIT, icm_pp, icm_pp, imFile, pimFile, NULL);

    if (ret)
    {
        flags |= f_rmPim;

        if (ret == -1)
            rss_spawnErr(icm_pp);

        exit(1);
    }

    if (flags & f_preprocess)
        exit(0);
}    

