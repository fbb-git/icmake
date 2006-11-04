/*
                            I N S E R T A R . C
*/

#include "iccomp.h"

ESTRUC_ *insertarg(insert, mult)
    ESTRUC_
        *insert,
        *mult;
{
    register size_t
        count;

    count = ++mult->type;                   /* get/increase # of args */
                                            /* room for extra ESTRUC_ */
    mult->code = xrealloc(mult->code, count * sizeof(ESTRUC_));

    memmove(                                /* shift up for new firstarg */
         codestruc(mult, 1),
         codestruc(mult, 0),
         (count - 1) * sizeof(ESTRUC_));

    etoc(insert);                           /* argument is code now */
    *codestruc(mult, 0) = *insert;          /* insert expression in array */
    return (mult);                          /* done */
}
