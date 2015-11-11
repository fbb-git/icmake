#include "rss.ih"

char const *rss_getPath(char const *n)
{
    register int last;

    rs_split(n);
    last = strlen(gr_dir);

    if (last && gr_dir[last - 1] != DIRSEP)
        gr_dir[last] = DIRSEP;

    return gr_dir;
}
