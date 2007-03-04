/*
\funcref{finddef}{int finddef(\params)}
    {
        {char} {*s} {identifier to search for}
    }
    {index in {\em defined} array if identifier found, or {\em -1} if not
     found}
    {}
    {}
    {finddef.c}
    {

        Function {\em finndef()} attempts to find an identifier {\em s} in the
        array of defined identifiers. The {\em defined} array consists of
        structs, holding the redefined identifier(field {\em ident}) and the
        redefinition string(field {\em redef}).

        An index into {\em defined} is returned; at {\em defined[ret].redef}
        the redefinition string can be found. If the identifier is not found in
        {\em redef}, {\em --1} is returned.

    }
*/

#include "icm-pp.h"

int finddef(char *s)
{
    register int i;

    for (i = 0; i < ndefined; i++)
    {
        if (!strcmp(defined[i].ident, s))
            return i;
    }

    return -1;
}
