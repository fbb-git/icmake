#include "dependencies.ih"

void dCheckUseAll(int idx)
{
    if (sdep.d_useAll == NULL)
        return;

    if (rss_exists(sdep.d_useAll))
        sdep.d_useAllExists[idx] = 1;
}
