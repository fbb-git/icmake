#include "rss.ih"

char *rss_findNext()
{
    char
        *cp;                                /* pointer to matched filename */

    while (!rs_findNext(&gr_ifs.find))     /* find next entry */
    {
        if ( (cp = rs_fileFound()) )           /* file found ?    */
            return (cp);                    /* return its name */
    }

    return (NULL);                          /* none found */
}
