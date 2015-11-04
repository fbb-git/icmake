#include "symtab.ih"

ExprType symtabLocalType(size_t idx)
{
    return (gs_locals + idx).type & e_typeMask;
}
