#include "rss.ih"

char const *rss_changeBase(char const *n, char const *b)
{
    rs_split(n);
    *gr_fname = 0;
    if (b)
        strcpy (gr_fname, b);
    rs_join();
    return gr_name;
}
