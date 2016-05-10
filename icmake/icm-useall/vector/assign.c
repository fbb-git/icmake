#include "vector.ih"

void assign(Vector *vector, int idx, char const *txt)
{
    free(vector->txt[idx]);
    vector->txt[idx] = rss_strdup(txt);
}
