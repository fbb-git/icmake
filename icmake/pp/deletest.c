/*
                                D E L E T E S T . C

    Delete standard comment from the line pointed to by 'cp'
*/

#include "icm-pp.h"

void delete_std_comment(char *cp)
{
    char
        *eoc;                               /* end of comment */

    if (!(eoc = strstr(cp, "*/")))          /* can't find it ? */
        error("%s: %d: unterminated std-comment in #define",
                filestack[filesp].n, filestack[filesp].l);
    else                                    /* copy the trailer to cp */
    {
        strcpy(cp, eoc + 2);                /* thus killing the std-comment */
        lexbuf.len = strlen(lexbuf.data) + 1;
    }
}
