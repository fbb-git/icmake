#include "rss.ih"

char *rss_changeBase(char const *path, char const *base)
{
    rs_split(path);
    *gr_fname = 0;
    if (base)
        strcpy(gr_fname, base);
    rs_join();
    return rss_strdup(gr_name);
}
