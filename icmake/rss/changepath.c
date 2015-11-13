#include "rss.ih"

char *rss_changePath(char const *path, char const *newDirs)
{
    rs_split(path);

    if (newDirs)
        strcpy(gr_dir, newDirs);

    rs_join();

    return rss_strdup(gr_name);
}
