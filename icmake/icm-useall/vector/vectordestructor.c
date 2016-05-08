#include "vector.ih"

void VectorDestructor(Vector *vector)
{
    for (int idx = vector->size; idx--; )
        free(vector->txt[idx]);
}
