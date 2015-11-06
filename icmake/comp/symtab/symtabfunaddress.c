#include "symtab.ih"

UNS16 symtab_funAddress(size_t funIdx)
{
    return gs_functions.info[funIdx].address;
}
