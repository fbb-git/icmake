#include "symtab.ih"

uint16_t symtab_funAddress(size_t funIdx)
{
    return gs_functions.info[funIdx].address;
}
