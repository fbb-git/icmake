#include "rss.ih"

char const *rss_getExt(char const *path)
{
    rs_split(path);

    return  *gr_ext == '.' ? 
                rss_strdup(gr_ext + 1)
            : 
                gr_ext;
}

