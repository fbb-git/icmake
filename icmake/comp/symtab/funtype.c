#include "symtab.ih"

ExprType symtab_funType(size_t funIdx)
{
    return gs_functions.info[funIdx].returnType;
}
