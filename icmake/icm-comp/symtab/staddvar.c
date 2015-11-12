#include "symtab.ih"

VarIndex st_addVar(ExprType type)
{
    VarInfo *vi;
    size_t idx = st_nextVarIdx(&vi);

    vi->name = rss_strdup(util_string());      /* set the name of the var */
    vi->type = type | e_var;          /* set the type of the var */
    vi->value = 0;

//FBB    fprintf(stderr, "var %s defined at nesting offset %u\n",
//FBB            vi->name, st_nestingOffset());

    VarIndex ret = {idx, st_nestingOffset() > 0};
    return ret;
}
