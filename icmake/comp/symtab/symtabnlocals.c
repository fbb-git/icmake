#include "symtab.ih"

size_t symtab_nLocals()
{
    return gs_vars.varTab[1].nVars - gs_function[nVars - 1].nParams;
}
