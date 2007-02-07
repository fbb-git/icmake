/*                              C H E S C . C

*/

#include "../rss/icrssdef.h"

static char
    near hexnumbers[] = "0123456789abcdef";

static int near atox (char *string, int *n)
{
    register size_t
        i,
        ch;
    int
        retval;

    if (*string == 'x')
    {
        (*n)++;                             /* 'x' processed */
        string++;                           /* and skipped */
        if (!sscanf(string, "%3x", &retval))/* No hex char value ? */
            return (-1);                    /* Flag no hex digit */

        retval &= 0xff;                     /* Compute char value */
        ch = 16;                            /* Radix setting */
    }
    else if (sscanf(string, "%3o", &retval))/* octal value ? */
    {
        if ((size_t)retval >= 0x100)        /* Octal yields too big a value ? */
            return -2;                      /* Return it */

        ch = 8;                             /* Radix setting */
    }
    else                                    /* Return character unchanged */
    {
        (*n)++;                             /* ch */
        return (*string);
    }

    hexnumbers[ch] = 0;                     /* Set hex conversion */

    for (i = 3; i--;)                       /* At most 3 digits */
    {
        ch = *string++;                     /* Fetch char */

        ch = tolower(ch);                   /* Convert to lower */

        if (!strchr (hexnumbers, ch))       /* No more number character ? */
            break;                          /* Leave the loop */

        (*n)++;                             /* eat char. */
    }

    hexnumbers[8] = '8';                    /* restore the hex-string */

    return retval;                          /* Returnvalue */
}

int chesc(char *string, int *n)
{
    register int
        c;

    if (!(c = *string++))
    {
        *n = 0;
        return (0);                         /* return 0 at end of string */
    }

    if (c != '\\')                          /* No escape char ? */
    {
        *n = 1;
        return (c);                         /* Return the character */
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
            return (atox (string - 1, n));
    }
}
