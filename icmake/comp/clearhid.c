/*
                            C L E A R H I D . C

          Clear hidden function names from the function- and
          global symboltables
*/

#include "iccomp.h"

static void remove_name(register SYMTAB_ *tab)
{
    register size_t
        index;

    if ((index = looksym(tab)) < tab->n_defined)
    {
        free(tab->symbol[index].name);      /* free the name-memory */
        tab->symbol[index].name =           /* set a dummy name     */
                           xstrdup(nullstring);
    }
}

void clear_hidden()
{
    register int
        index;

    for (index = 0; index < sizeof(hidden) / sizeof(HIDDEN_FUNCTION_); index++)
    {
        strcpy(string, hidden[index].name); /* prepare the lookup-name     */
        remove_name(&funtab);               /* remove the name from funtab */
        remove_name(&global);               /* remove also from global     */
    }
}
