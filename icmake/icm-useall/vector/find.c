#include "vector.ih"

int find(Vector *vector, char const *target)
{
    for (int idx = 0, end = vector->size; idx != end; ++idx)
    {
        if (strcmp(vector->txt[idx], target) == 0)
            return idx;
    }
    return -1;
}
