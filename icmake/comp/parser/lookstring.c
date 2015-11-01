/*
    Lookup (and maybe enter) a string
*/

#include "parser.ih"

static size_t n_allocated;

size_t lookstring(char *s)
{
    register size_t idx;

    for (idx = 0; idx < g_nStrings; idx++)
        if (!strcmp(g_stringtab[idx].string, s)) /* string found ? */
            return (idx);                      /* return string idx */

    if (n_allocated == g_nStrings)           /* full table */
        g_stringtab = xrealloc(g_stringtab,
                             (n_allocated += 20) * sizeof(STRINGTAB_));

                                             /* set the string in memory */
    g_stringtab[g_nStrings].string = xstrdup(s);
    g_stringtab[g_nStrings].index = gp_stringsize;

    gp_stringsize += strlen(s) + 1;

    g_nStrings++;                            /* next free */
    return (idx);                         /* return string idx */
}
