#define msg

#include "icmake.ih"

void preProcess()
{
    if (!(flags & f_doPreProcess))  /* no preprocessing requested: leave */
        return;

    int ret = spawnlp(P_WAIT, icm_pp, icm_pp, imFile, pimFile, NULL);

    if (ret)
    {
        flags |= f_rmPim;           /* remove the pim file if preprocessing
                                        failed */

        if (ret == -1)              /* return valu -1 means: icm-pp wasn't  */
            rss_spawnErr(icm_pp);   /* run                                  */

        exit(1);
    }
}    




