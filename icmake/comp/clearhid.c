/*
                            C L E A R H I D . C

          Clear hidden function names from the function- and
          global symboltables
*/

#include "iccomp.h"

static void remove_name(register SYMTAB_ *tab)
{
    register size_t
        idx;

    if ((idx = looksym(tab)) < tab->n_defined)
    {
        free(tab->symbol[idx].name);      /* free the name-memory */
        tab->symbol[idx].name =           /* set a dummy name     */
                           xstrdup(nullstring);
    }
}

void clear_hidden()
{
    register size_t
        idx;

    for (idx = 0; idx < sizeof(hidden) / sizeof(HIDDEN_FUNCTION_); idx++)
    {
        lexstring = xstrdup(hidden[idx].name); /* prepare the lookup-name     */
        remove_name(&funtab);               /* remove the name from funtab */
        remove_name(&global);               /* remove also from global     */
    }
}
