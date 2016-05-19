#include "symtab.ih"

unsigned symtab_nLocals()
{
    return gs_vars.varTab[1].nVars - gs_vars.nParams;
}
