/*
    Skip all characters until the matching initial char is found.
    Escaped initial characters are kept as well
*/

#include "icm-pp.h"

char *skip_until(char *cp)
{
    int end = *cp;

    while (*++cp != end)
    {
        if (*cp == '\\')    /* skip escaped char */
            ++cp;

        if (!*cp)           /* no more chars is an error */
            error("%s: %d: unterminated %s-constant in #define",
                filestack[filesp].n, 
                filestack[filesp].l,
                end == '"' ? "string" : "character");   
    }
    return ++cp;            /* return the char beyond the string/char const */
}
