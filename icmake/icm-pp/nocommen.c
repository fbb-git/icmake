/*
                                N O C O M M E N . C

    The function no_comment() removes comment found on a #define-line
    before entering the define-definition.

    Comment found in string constants are kept.

    The define-line is stored in lexbuf[]
*/

#include "icm-pp.h"

void no_comment()
{
    char                                    /* look for / */
        *cp = lexbuf.data;                  /* get first char-address */

    while (*cp)                             /* inspect all characters */
    {
        switch (*cp)
        {
            case '/':                       /* slash found */
                if (*(cp + 1) == '/')       /* next one is a slash too: */
                {
                    *cp = 0;                /* so we have eoln-comment   */
                    lexbuf.len = cp - lexbuf.data;
        
                    return;                 /* and the define stops here */
                }
        
                if (*(cp + 1) == '*')       /* we have std comment    */
                    delete_std_comment(cp); /* delete the std comment */
            break;

            case '"':                       /* keep strings in the #define */
            case '\'':                      /* keep quoted constants */
                cp = skip_until(cp);
            break;

            default:
                ++cp;                       /* next char */
        }
    }
}
