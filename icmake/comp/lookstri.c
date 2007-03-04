/*
                           L O O K S T R I . C

    Lookup (and maybe enter) a string
*/

#include "iccomp.h"

static size_t
    n_allocated;

size_t lookstring(s)
    char *s;
{
    register size_t
        idx;

    for (idx = 0; idx < n_strings; idx++)
        if (!strcmp(stringtab[idx].string, s)) /* string found ? */
            return (idx);                      /* return string idx */

    if (n_allocated == n_strings)           /* full table */
        stringtab = xrealloc(stringtab,
                             (n_allocated += 20) * sizeof(STRINGTAB_));

                                             /* set the string in memory */
    stringtab[n_strings].string = xstrdup(s);
    stringtab[n_strings].index = stringsize;

    stringsize += strlen(s) + 1;

    n_strings++;                            /* next free */
    return (idx);                         /* return string idx */
}
