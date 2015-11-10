/*

    returns the next char, which may be 0, or
        -1 if the conversion failed.

*/

#include "rss.ih"

static char stdEscape[] = 
            {'n', 't', 'v', 'b', 'r', 'f', 'a', '\'', '"', '\\'};

static char escaped[] = 
            {'\n', '\t', '\v', '\b', '\r', '\f', '\a', '\'', '"', '\\'};

int rs_chesc(char *string, int *nProcessed)
{
    register int nextChar;

    if (!(nextChar = *string++))
    {
        *nProcessed = 0;
        return 0;                           /* return 0 at end of string */
    }

    if (nextChar != '\\')                   /* No escape char ? */
    {
        *nProcessed = 1;
        return nextChar;                    /* Return the character */
    }

    *nProcessed = 2;                      /* 1 (escape) char processed */
                                          /* count 1 extra char to follow */

    nextChar = *string++;
    char *cp = strchr(stdEscape, nextChar);

    if (cp != NULL)
        return escaped[cp - stdEscape];

     --*nProcessed;                     /* char beyond \ not yet done */
     return rs_atox(string - 1, nProcessed - 1);
}

