#include "symtab.ih"

int st_compareVars(void const *key, void const *idxPtr)
{
    return strcmp((char const *)key, 
                    gs_compareTable->info[*(size_t const *)idxPtr].name);
}

