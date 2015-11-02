#include "parser.ih"

void enter()
{
    register size_t n_defined;
    register SYMBOL_ *sym;

    n_defined = g_entertab->n_defined;

    if (looksym(g_entertab) != n_defined) /* look for symbol in active tab. */
    {                                     /* message if multiply defined */
        semantic("%s multiply defined", g_lexstring);
        return;
    }

    if (g_entertab->n_allocated == n_defined) /* full table ? */
        g_entertab->symbol =                  /* room for 20 more symbols */
            xrealloc(g_entertab->symbol,
                     (g_entertab->n_allocated += 20) * sizeof(SYMBOL_));

    sym = g_entertab->symbol + n_defined;

    sym->name = xstrdup(g_lexstring);       /* set the name of the var */
    sym->var.type = gp_varType;             /* set the type of the var */

    if (g_entertab == &g_globaltab)         /* clear new g_globaltab entry */
        memset (&sym->var.vu, 0, sizeof(VAR_UNION_));

    g_entertab->n_defined++;                /* next free */
}
