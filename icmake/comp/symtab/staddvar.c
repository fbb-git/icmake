#include "symtab.ih"

void st_addVar(ExprType type)
{
    Symbol *next = st_next(gs_top);

    next->name = xstrdup(g_lexstring);      /* set the name of the var */
    next->var.type = type | e_var;          /* set the type of the var */

    if (gs_nVartab == 1)                    /* initialize global variable */
        memset(&next->var.vu, 0, sizeof(VAR_UNION_));
}
