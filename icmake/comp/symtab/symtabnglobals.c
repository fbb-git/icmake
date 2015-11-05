#include "symtab.ih"

size_t symtab_nGlobals()
{
    return gs_vars.varTab->nVars;
}
