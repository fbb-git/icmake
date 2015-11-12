#include "rss.ih"

char const *rss_changeExt(char const *path, char const *extension)
{
    rs_split(path);
    *gr_ext = 0;
    if (extension)
        strcpy(gr_ext, extension);
    rs_join();
    return gr_name;
}
