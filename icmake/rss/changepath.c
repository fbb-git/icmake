#include "rss.ih"

char const *rss_changePath(char const *n, char const *p)
{
    rs_split(n);

    if (p)
        strcpy(gr_dir, p);

    rs_join();

    return gr_name;
}
