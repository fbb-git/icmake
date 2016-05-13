#include "dependencies.ih"

void d_checkUseAll(int idx)
{
    if (s_Dependencies.useAll == NULL)
        return;

    if (rss_exists(s_Dependencies.useAll))
        s_Dependencies.useAllExists[idx] = 1;
}
