#include "symtab.ih"

SymtabIndex symtab_defineVar(ExprType type)
{
    SymtabIndex ret = st_varIdx();

    if (ret.idx == -1)
        ret = st_addVar(type);                  /* add it */
    else        
        ret.idx = -1;                           /* already defined */

    return ret;
}
