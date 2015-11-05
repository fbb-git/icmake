#include "symtab.ih"

void symtab_setNparams()
{
    gs_vars.nParams = gs_functions.info[gs_functions.nFunctions - 1].nParams;
}
