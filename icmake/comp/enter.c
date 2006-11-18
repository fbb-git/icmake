/*
                            E N T E R . C
*/

#include "iccomp.h"

void enter()
{
    register size_t
        n_defined;
    register SYMBOL_
        *sym;

    n_defined = entertab->n_defined;

    if (looksym(entertab) != n_defined)     /* look for symbol in active tab. */
    {                                       /* message if multiply defined */
        semantic("%s multiply defined", lexstring);
        return;
    }

    if (entertab->n_allocated == n_defined) /* full table ? */
        entertab->symbol =                  /* room for 20 more symbols */
            xrealloc(entertab->symbol,
                     (entertab->n_allocated += 20) * sizeof(SYMBOL_));

    sym = entertab->symbol + n_defined;

    sym->name = xstrdup(lexstring);         /* set the name of the var */
    sym->var.type = vartype;                /* set the type of the var */

    if (entertab == &global)                /* clear new global entry */
        memset (&sym->var.vu, 0, sizeof(VAR_UNION_));

    entertab->n_defined++;                  /* next free */
}
