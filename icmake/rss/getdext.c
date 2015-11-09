#include "rss.ih"

char const *rss_getDext(char const *n)     /* including the dot */
{
    rs_split(n);
    return *gr_ext == '.' ? rss_strdup(gr_ext) : gr_ext;
}
