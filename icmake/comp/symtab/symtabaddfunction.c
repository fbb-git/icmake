#include "symtab.ih"

int symtabAddFunction(ExprType type) /* 0: function added, -1: already def'd */
{
    if (symtabFunIdx() != gs_functions->nSymbols)
        return -1;

    Symbol *next = st_next(gs_functions);

    next->name = xstrdup(g_lexstring);
    next->var.type = type;
    next->var.vu.i = xrealloc(NULL, sizeof(INTER_));

    return 0;
}
