#include "rss.ih"

char const *rss_changeExt(char const *n, char const *e)
{
    rs_split(n);
    *gr_ext = 0;
    if (e)
        strcpy(gr_ext, e);
    rs_join();
    return gr_name;
}
