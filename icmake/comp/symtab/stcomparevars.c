#include "symtab.ih"

int st_compareVars(char const *key, size_t *idxPtr)
{
    return strcmp(key, gs_compareTable[*idPtr].name);
}

