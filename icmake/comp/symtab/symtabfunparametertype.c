#include "symtab.ih"

ExprType symtabFunParameterType(Symbol const *fun, size_t idx)
{
    return (ExprType)fun->var.vu.i->ls.list.element[idx] & e_typeMask;
}

//    ((char *)
//       g_funtab.symbol[funIdx].var.vu.i->ls.list.element)[idx]
//    & a->type & e_typeMask

