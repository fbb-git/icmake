#include "symtab.ih"

SymtabIndex st_addVar(ExprType type)
{
    VarInfo *vi;
    size_t idx = st_nextVarIdx(&vi);

    vi->name = xstrdup(g_lexstring);      /* set the name of the var */
    vi->type = type | e_var;          /* set the type of the var */
    vi->value = 0;

    SymtabIndex ret = {idx, st_nestingLevel()};
    return ret;
}
