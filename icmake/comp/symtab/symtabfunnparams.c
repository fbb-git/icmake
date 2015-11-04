#include "symtab.ih"

size_t symtabFun_nParams(size_t funIdx)
{
    return gs_functions[funIdx].nParams;
}
