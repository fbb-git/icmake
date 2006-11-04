/*
                            M U L T A R G S . C
*/

#include "iccomp.h"

ESTRUC_ *multargs(left, right)
    ESTRUC_
        *left,
        *right;
{
    register size_t
        count;

    count = ++left->type;                   /* get/increase # of args */
                                            /* room for extra ESTRUC_ */
    left->code = xrealloc(left->code, count * sizeof(ESTRUC_));
    etoc(right);                            /* argument is code now */
                                            /* right expression in array */

    *codestruc(left, count - 1) = *right;

    return (left);                          /* done */
}
