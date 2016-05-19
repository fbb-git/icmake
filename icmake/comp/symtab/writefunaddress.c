#include "symtab.ih"

void symtab_writeFunAddress(FILE *bin, unsigned funIdx)
{
    util_out(bin, &gs_functions.info[funIdx].address, sizeof(uint16_t));
}
