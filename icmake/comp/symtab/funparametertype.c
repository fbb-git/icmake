#include "symtab.ih"

ExprType symtab_funParameterType(size_t funIdx, size_t paramIdx)
{
                                            /* &typeMask removes e_reg */
    return gs_functions.info[funIdx].paramType[paramIdx] & e_typeMask;
}
