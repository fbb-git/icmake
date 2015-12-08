#include "symtab.ih"

ExprType symtab_funParameterType(unsigned funIdx, unsigned paramIdx)
{
                                            /* &typeMask removes e_reg */
    return gs_functions.info[funIdx].paramType[paramIdx] & e_typeMask;
}
