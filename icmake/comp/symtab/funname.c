#include "symtab.ih"

char const *symtab_funName(size_t funIdx)
{
    return gs_functions.info[funIdx].name;
}
