#include "symtab.ih"

ExprType symtabFunType(size_t funIdx)
{
    return gs_functions[funIdx].type;
}
