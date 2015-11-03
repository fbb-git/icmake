#include "symtab.ih"

int symtabDefineVar(ExprType type)
{
    int idx = st_find(gs_top);   /* look for g_lexstr. in the topmost 
                                    symbol table */

    if (idx == -1)                                      /* not yet defined */
        st_addVar(type);
    else
        idx = -1;                                       /* already defined */

    return idx;
}
