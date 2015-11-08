#include "symtab.ih"

FunInfo *st_lastFunInfo()
{
    return gs_functions.info + gs_functions.nFunctions - 1;
}
