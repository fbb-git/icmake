/*
#define msg
*/

#include "rss.ih"

char *rss_strUnescape(char *source)  /* unescapes and returns source */
{
    register int convRet;
    int nProcessed;

    char *ret = source;                    /* Set return pointer */
    char *dest = source;                   /* Initially: target is source */

    msg("source = %s", source);

    while (1)
    {
        convRet = rs_chesc(source, &nProcessed);
        msg("returning: %d", convRet);
        
        if (convRet  == -1)                 /* error ? */
            return NULL;                    /* then ERROR out */

        *dest++ = convRet;                        /* Set destination */

        if (convRet == 0)                         /* terminating 0 ? */
            return ret;                     /* then OK out */

        source += nProcessed;               /* Skip to next char to convert */
    }
}
