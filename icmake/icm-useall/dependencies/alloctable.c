#include "dependencies.ih"

int **allocTable(int size)
{
    int **table = rss_realloc(0, size * sizeof(int *));

    for (int idx = 0; idx != size; ++idx)
    {
        memset(table[idx] = rss_realloc(0, size * sizeof(int)),
                0, size * sizeof(int));
        table[idx][idx] = 1;            // indicate dependent on itself;
    }                                   // used by closure

    return table;
}
