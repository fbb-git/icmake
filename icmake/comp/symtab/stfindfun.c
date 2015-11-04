#include "symtab.ih"

int st_findFun(void const *key, void const *funInfo)
{
    return strcmp((char const *)key, ((FunInfo *)funInfo)->name);
}
