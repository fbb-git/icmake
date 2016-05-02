#include "process.ih"

char **store(int *size, char **storage, char const *entry)
{
    storage = (char **)rss_realloc(storage, (*size + 1) * sizeof(char *));
    storage[(*size)++] = rss_strdup(entry);
    return storage;
}
