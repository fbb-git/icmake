#include "util.ih"

void freeTable(int **table, int size)
{
    for (int idx = 0; idx != size; ++idx)
        free(table[idx]);

    free(table);
}
