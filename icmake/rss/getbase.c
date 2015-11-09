#include "rss.ih"

char const *rss_getBase(char const *n)
{
    rs_split(n);
    return gr_fname;
}
