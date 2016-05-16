#include "vector.ih"

void erase(Vector *vector, int idx)
{
    free(vector->txt[idx]);
    vector->txt[idx] = NULL;
}
