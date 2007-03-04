/*                              C H E S C . C

*/

#include "../rss/icrssdef.h"

static char hexnumbers[] = "0123456789abcdef";

static size_t atox(char *string, int *n)
{
    register size_t i;
    register size_t radix;
    
    unsigned hex;

    if (*string == 'x')
    {
        (*n)++;                             /* 'x' processed */
        string++;                           /* and skipped */
        if (!sscanf(string, "%3x", &hex))   /* No hex char value ? */
            return ~0U;                     /* Flag no hex digit */

        hex &= 0xff;                        /* Compute char value */
        radix = 16;                            /* Radix setting */
    }
    else if (sscanf(string, "%3o", &hex))   /* octal value ? */
    {
        if (hex >= 0x100)                   /* Octal yields too big a value ? */
            return (size_t)-2;            /* Return it */

        radix = 8;                             /* Radix setting */
    }
    else                                    /* Return character unchanged */
    {
        (*n)++;                             /* ch */
        return *string;
    }

    hexnumbers[radix] = 0;                  /* Set hex conversion */

    for (i = 3; i--;)                       /* At most 3 digits */
    {
        register int ch = *string++;        /* Fetch char */

        ch = tolower(ch);                   /* Convert to lower */

        if (!strchr (hexnumbers, ch))       /* No more number character ? */
            break;                          /* Leave the loop */

        (*n)++;                             /* eat char. */
    }

    hexnumbers[8] = '8';                    /* restore the hex-string */

    return hex;                             /* Returnvalue */
}

int chesc(char *string, int *n)
{
    register int
        c;

    if (!(c = *string++))
    {
        *n = 0;
        return 0;                           /* return 0 at end of string */
    }

    if (c != '\\')                          /* No escape char ? */
    {
        *n = 1;
        return c;                           /* Return the character */
    }

    *n = 2;                                 /* 1 (escape) char processed */
                                            /* count 1 extra char to follow */

    switch (c = *string++)                  /* fetch next char */
    {
        case 'n':
            return ('\n');                  /* newline */

        case 't':
            return ('\t');                  /* (etc.) */

        case 'v':
            return ('\v');

        case 'b':
            return ('\b');

        case 'r':
            return ('\r');

        case 'f':
            return ('\f');

        case 'a':
            return ('\a');

        case '\'':
            return ('\'');

        case '"':
            return ('"');

        case '\\':
            return ('\\');

        default:
            (*n)--;                         /* extra char not yet done */
            return atox(string - 1, n);
    }
}
