#include "symtab.ih"

ExprType symtabLocalType(size_t idx)
{
    return gs_vars[1].info[idx + gs_vars.nParams].type & e_typeMask;
}
