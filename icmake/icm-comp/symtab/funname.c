#include "symtab.ih"

char const *symtab_funName(unsigned funIdx)
{
    return gs_functions.info[funIdx].name;
}
