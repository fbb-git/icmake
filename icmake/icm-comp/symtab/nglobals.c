#include "symtab.ih"

unsigned symtab_nGlobals()
{
    return gs_vars.varTab->nVars;
}
