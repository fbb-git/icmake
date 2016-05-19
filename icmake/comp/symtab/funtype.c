#include "symtab.ih"

ExprType symtab_funType(unsigned funIdx)
{
    return gs_functions.info[funIdx].returnType;
}
