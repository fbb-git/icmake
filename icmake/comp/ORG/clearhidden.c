/*
                            C L E A R H I D . C

          Clear hidden function names from the function- and
          global symboltables
*/

#include "parser.ih"

static void remove_name(register SYMTAB_ *tab)
{
    register size_t
        idx;

    if ((idx = looksym(tab)) < tab->n_defined)
    {
        free(tab->symbol[idx].name);      /* free the name-memory */
        tab->symbol[idx].name =           /* set a dummy name     */
                           xstrdup(g_nullstring);
    }
}

void clear_hidden()
{
    register size_t
        idx;

    for (idx = 0; idx < sizeof(hidden) / sizeof(HIDDEN_FUNCTION_); idx++)
    {
        g_lexstring = xstrdup(hidden[idx].name); /* prepare the lookup-name     */
        remove_name(&g_funtab);               /* remove the name from g_funtab */
        remove_name(&g_globaltab);               /* remove also from g_globaltab     */
    }
}
