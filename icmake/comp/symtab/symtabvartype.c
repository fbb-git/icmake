#include "symtab.ih"

ExprType symtab_varType(VarIndex vt)
{
    return gs_vars.varTab[vt.type].info[vt.idx].type;
}
