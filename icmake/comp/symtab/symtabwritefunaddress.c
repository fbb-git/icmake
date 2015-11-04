#include "symtab.ih"

void symtabWriteFunAddress(FILE *bin, size_t funIdx)
{
    out(bin, &gs_functions[funIdx].address, sizeof(UNS16);
}
