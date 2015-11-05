#include "symtab.ih"

size_t symtab_fun_nParams(size_t funIdx)
{
    return gs_functions.info[funIdx].nParams;
}
