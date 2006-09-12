
/*                              S T R E S C . C

*/

#include "../rss/icrssdef.h"

char *stresc(char *source)
{
    register int
        c;
    int
        n;
    char
        *ret,
        *dest;

    ret = source;                           /* Set return pointer */
    dest = source;                          /* Initially: target is source */

    while (1)
    {
        if ((c = chesc(source, &n)) < 0)    /* error ? */
            return (NULL);                  /* then ERROR out */

        *dest++ = (char)c;                  /* Set destination */

        if (!c)                             /* No character ? */
            return (ret);                   /* then OK out */

        source += n;                        /* Skip to next char to convert */
    }
}
