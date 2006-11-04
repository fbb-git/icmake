/*
                            C A T S T R I N . C
*/

#include "iccomp.h"

void catstrings(lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    char
        *cp;
    register size_t
        l_len,
        r_len;

    l_len = strlen( stringtab[ lval->evalue ].string );
    r_len = strlen( stringtab[ rval->evalue ].string );

    cp = xrealloc(NULL, l_len + r_len + 1); /* room for catenated string */
    lval->evalue =
        lookstring
        (
            strcat                          /* catenate two strings */
            (
                strcpy(cp, stringtab[lval->evalue].string),
                stringtab[rval->evalue].string
            )
        );
    free(cp);                               /* free intermediate memory */
}
