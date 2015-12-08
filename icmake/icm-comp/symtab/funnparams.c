#include "symtab.ih"

unsigned symtab_fun_nParams(unsigned funIdx)
{
    return gs_functions.info[funIdx].nParams;
}
