#include "symtab.ih"

void symtabSetNparams()
{
    gs_vars.nParams = gs_function.info[gs_function.nVars - 1].nParams;
}
