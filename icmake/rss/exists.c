/*
    The function returns 1 if the filename given as its argument exists.
    Otherwise, 0 is returned. Path can be NULL
*/

/*#define msg
*/

#include "rss.ih"

int rss_exists(char const *path)
{
    struct stat buf;

    return !stat(path, &buf);
}
