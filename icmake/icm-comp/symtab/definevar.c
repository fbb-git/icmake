#include "symtab.ih"

VarIndex symtab_defineVar(ExprType type)
{
    VarIndex ret;

    int idx = st_findVar(st_nestingOffset());    /* see if the var. exists at
                                                    the current nesting level 
                                                */

    if (idx == -1)                              /* if not, then add it */
        ret = st_addVar(type);                  /* add a new variable */
    else        
        ret.idx = -1;                           /* already defined */

    return ret;
}
