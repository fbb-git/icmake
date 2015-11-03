#include "symtab.ih"

ExprType symtabFunType(Symbol const *funInfo)
{
    return funInfo->var.type;
}
