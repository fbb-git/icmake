#include "rss.ih"

char *rss_changeExt(char const *path, char const *extension)
{
    rs_split(path);
    *gr_ext = 0;
    if (extension)
        strcpy(gr_ext, extension);

    rs_join();

    return rss_strdup(gr_name);
}

