/*
    Lookup (and maybe enter) a string
*/

#include "parser.ih"

static size_t n_allocated;

size_t p_findString(char *s)
{
    register size_t idx;

    for (idx = 0; idx < gp_nStrings; idx++)
        if (!strcmp(gp_stringTable[idx].string, s)) /* string found ? */
            return (idx);                      /* return string idx */

    if (n_allocated == gp_nStrings)           /* full table */
        gp_stringTable = rss_realloc(gp_stringTable,
                             (n_allocated += 20) * sizeof(StringTable));

                                             /* set the string in memory */
    gp_stringTable[gp_nStrings].string = rss_strdup(s);
    gp_stringTable[gp_nStrings].index = gp_stringsize;

    gp_stringsize += strlen(s) + 1;

    gp_nStrings++;                            /* next free */
    return idx;                               /* return string idx */
}
