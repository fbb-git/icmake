#include "process.ih"

int find(int size, char **storage, char const *key)
{
                                        // visit all dirnames to recompile
    for (int idx = 0; idx != size; ++idx)
    {
        if (strcmp(storage[idx], key) == 0)
            return idx;                 // 'matched' is included, and it is
    }                                   // mentioned in the dirs to recompile

    return -1;
}
