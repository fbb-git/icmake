#include "symtab.ih"

ExprType st_paramType(unsigned idx)
{
    return gs_vars.varTab[1].info[idx].type & e_typeMask;
}
