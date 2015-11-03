#include "symtab.ih"

size_t symtabFun_nParams(Symbol const *funInfo)
{
    return funInfo->var.vu.i->ls.list.size;
}
