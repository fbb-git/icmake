#include "symtab.ih"

uint16_t symtab_funAddress(unsigned funIdx)
{
    return gs_functions.info[funIdx].address;
}
