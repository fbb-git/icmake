#include "vector.ih"

void add(Vector *vector, char const *txt)
{
    if (find(vector, txt) != -1)
        return;

    vector->txt = rss_realloc(vector->txt, 
                                (vector->size + 1) * sizeof(char *));
    vector->txt[vector->size++] = rss_strdup(txt);
}
