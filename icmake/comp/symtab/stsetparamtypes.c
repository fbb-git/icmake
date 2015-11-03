#include "symtab.ih"

void st_setParamTypes(Symbol *last, size_t nParams)
{

                                            /* assign param. types to str */
    register char *type = (char *)last->var.vu.i->ls.list.element;

//    for (size_t idx = 0; idx != nParams; ++idx)   
//        type[idx] =
//                     (char)(gp_local.symbol[idx].var.type & e_typeMask);

}
