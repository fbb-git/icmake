#include "parser.ih"

void catstrings(SemVal *lval, SemVal *rval)
{
    char *cp;
    register size_t
        l_len,
        r_len;

    l_len = strlen( gp_stringTable[ lval->evalue ].string );
    r_len = strlen( gp_stringTable[ rval->evalue ].string );

    cp = xrealloc(NULL, l_len + r_len + 1); /* room for catenated string */
    lval->evalue =
        lookstring
        (
            strcat                          /* catenate two strings */
            (
                strcpy(cp, gp_stringTable[lval->evalue].string),
                gp_stringTable[rval->evalue].string
            )
        );
    free(cp);                               /* free intermediate memory */
}
