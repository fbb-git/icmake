#include "symtab.ih"

VarIndex st_addVar(ExprType type)
{
    VarInfo *vi;
    size_t idx = st_nextVarIdx(&vi);

    vi->name = xstrdup(util_string());      /* set the name of the var */
    vi->type = type | e_var;          /* set the type of the var */
    vi->value = 0;

    VarIndex ret = {idx, st_nestingLevel() > 0};
    return ret;
}
