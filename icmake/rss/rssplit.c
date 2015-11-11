#include "rss.ih"

void rs_split(char const *n)
{
    rss_splitPath(n, gr_dir, gr_fname, gr_ext);
}
