#include "rss.ih"

void rs_split(char const *path)
{
    rss_splitPath(path, gr_dir, gr_fname, gr_ext);
}
