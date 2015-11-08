#include "symtab.ih"

ExprType st_paramType(size_t idx)
{
    return gs_vars.varTab[1].info[idx].type & e_typeMask;
}
