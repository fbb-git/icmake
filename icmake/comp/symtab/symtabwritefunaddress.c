#include "symtab.ih"

void symtab_writeFunAddress(FILE *bin, size_t funIdx)
{
    out(bin, &gs_functions.info[funIdx].address, sizeof(UNS16));
}
