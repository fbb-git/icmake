#include "vector.ih"

void resize(Vector *vector, int newSize)
{
    int currentSize = vector->size;

    if (newSize == currentSize)
        return;

    if (newSize < currentSize)
    {
        for (int idx = newSize, end = vector->size; idx != end; ++idx)
            free(vector->txt[idx]);
    }
     
    vector->size = newSize;
    vector->txt = rss_realloc(vector->txt, newSize * sizeof(char *));

    if (newSize > currentSize)
        memset(vector->txt + currentSize * sizeof(char *), 
               0, (newSize - currentSize) * sizeof(char *));
}
