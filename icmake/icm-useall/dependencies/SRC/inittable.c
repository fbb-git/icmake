#include "dependencies.ih"

int **initTable(int size)
{
    int **table = rss_realloc(0, size * sizeof(int *));
    for (int idx = 0; idx != size; ++idx)
        memset(
            table[idx] = rss_realloc(0, size * sizeof(int)),
            size * sizeof(int), 0
        );

    return table;        
}
