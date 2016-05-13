#include "vector.ih"

void assign(Vector *vector, int idx, char const *txt)
{
//    printf("ASSIGN: %s, old = %p\n", txt, vector->txt[idx]);

    free(vector->txt[idx]);
    vector->txt[idx] = rss_strdup(txt);
}
