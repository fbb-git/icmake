#include "symtab.ih"

SymtabIndex st_varIdx(ExprType type)
{
    size_t depth;
    SymtabIndex ret;

    for (depth = st_nestingLevel(); depth--; )
    {
        int idx = st_findVar(depth);        /* g_lextring at this level? */
                                            /* idx is idx in VarInfo array */
        if (idx != -1)
        {
            ret.idx = idx;
            ret.type = depth;
            return ret;
        }
    }
    ret.idx = -1;
    return ret;
}
