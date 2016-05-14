#include "dependencies.ih"

void d_checkUseAll(int idx)
{
    if (sdep.useAll == NULL)
        return;

    if (rss_exists(sdep.useAll))
        sdep.useAllExists[idx] = 1;
}
