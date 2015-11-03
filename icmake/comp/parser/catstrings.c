#include "parser.ih"

void catstrings(SemVal *lval, SemVal *rval)
{
    char *cp;
    register size_t
        l_len,
        r_len;

    l_len = strlen( g_stringtab[ lval->evalue ].string );
    r_len = strlen( g_stringtab[ rval->evalue ].string );

    cp = xrealloc(NULL, l_len + r_len + 1); /* room for catenated string */
    lval->evalue =
        lookstring
        (
            strcat                          /* catenate two strings */
            (
                strcpy(cp, g_stringtab[lval->evalue].string),
                g_stringtab[rval->evalue].string
            )
        );
    free(cp);                               /* free intermediate memory */
}
