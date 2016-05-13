#include "util.ih"

int *initRow(int size)
{
    return memset(rss_realloc(0, size * sizeof(int)), 0, size * sizeof(int));
}
