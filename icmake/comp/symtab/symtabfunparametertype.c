#include "symtab.ih"

ExprType symtabFunParameterType(size_t funIdx, size_t paramIdx)
{
    return gs_function[funIdx].paramType[paramIdx]; // & e_typeMask; (?)
}




//    ((char *)
//       g_funtab.symbol[funIdx].var.vu.i->ls.list.element)[idx]
//    & a->type & e_typeMask

