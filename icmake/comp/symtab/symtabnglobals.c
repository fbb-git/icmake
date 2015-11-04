#include "symtab.ih"

size_t symtab_nGlobals()
{
    return gs_vars ? gs_vars->nVars : 0;
}
