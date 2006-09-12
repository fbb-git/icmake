/*
                           L O O K S T R I . C

    Lookup (and maybe enter) a string
*/

#include "iccomp.h"

static unsigned
    n_allocated;

unsigned lookstring(s)
    char *s;
{
    register unsigned
        index;

    for (index = 0; index < n_strings; index++)
        if (!strcmp(stringtab[index].string, s)) /* string found ? */
            return (index);                      /* return string index */

    if (n_allocated == n_strings)           /* full table */
        stringtab = xrealloc(stringtab,
                             (n_allocated += 20) * sizeof(STRINGTAB_));

                                             /* set the string in memory */
    stringtab[n_strings].string = xstrdup(s);
    stringtab[n_strings].index = stringsize;

    stringsize += strlen(s) + 1;

    n_strings++;                            /* next free */
    return (index);                         /* return string index */
}
