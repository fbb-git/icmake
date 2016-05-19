#include "symtab.ih"

ExprType symtab_localType(unsigned idx)
{
    return gs_vars.varTab[1].info[idx + gs_vars.nParams].type & e_typeMask;
}
