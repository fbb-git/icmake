#include "symtab.ih"

size_t symtabFunAddress(Symbol const *funInfo)
{
    return funInfo->var.vu.i->count;
}
