/*
                            F I N D N E X T . C
*/

#include "rss.ih"

char *findnext()
{
    char
        *cp;                                /* pointer to matched filename */

    while (!rsFindNext(&ifs.find))     /* find next entry */
    {
        if ( (cp = filefound()) )           /* file found ?    */
            return (cp);                    /* return its name */
    }

    return (NULL);                          /* none found */
}
