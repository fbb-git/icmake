#include "rss.ih"

char *rss_findFirst(char const *fspec, size_t attrib)
{
    char *cp;                                /* pointer to matched filename */

    gr_ifs.attrib = attrib;                    /* initialize gr_ifs */

                                            /* find all entries */
    if (rs_findFirst(fspec, (size_t)-1, &gr_ifs.find))
        return NULL;                      /* failed already: return NULL */

    cp = rs_fileFound();

    return
        cp ?                                
            cp                              /* attrib/pattern ok: return */
        :
            rss_findNext();                 /* or retry a match */
}
