#include "symtab.ih"

char const *symtabFunName(size_t funIdx)
{
    return gs_functions[funIdx].name;
}
