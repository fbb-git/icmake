#include "vector.ih"

void replaceN(Vector *vector, int idx, char const *txt, int size)
{
    free(vector->txt[idx]);
    char *cp = vector->txt[idx] = rss_realloc(0, size + 1);
    memcpy(cp, txt, size);
    cp[size] = 0;
}
