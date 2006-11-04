/*
                            F I N D F I R S . C

    Note on the MSDOS platforms:

    With file specifications terminating in a relative path (i.e.,
    terminating in . or ..) _dos_findfirst() fails, and findfirst() will
    fail too.

*/

#include "icrssdef.h"

ICMAKE_FIND_
    ifs;                                    /* icmake find-struct */

char *findfirst(char const *fspec, size_t attrib)
{
    char
        *cp;                                /* pointer to matched filename */

    ifs.attrib = attrib;                    /* initialize ifs */

                                            /* find all entries */
    if (_dos_findfirst(fspec, (size_t)-1, &ifs.find))
        return (NULL);                      /* failed already: return NULL */

    return
    (
        (cp = filefound()) ?                /* attrib/pattern ok: return */
            cp
        :
            findnext()                      /* or retry a match */
    );
}
