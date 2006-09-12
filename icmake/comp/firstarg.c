/*
                            F I R S T A R G . C
*/

#include "iccomp.h"

static ESTRUC_
    arr;

ESTRUC_ *firstarg(e)
    ESTRUC_
        *e;
{
    etoc(e);                                /* argument is code now */
                                            /* code points to ESTRUC_ */
    arr.code = xrealloc(NULL, sizeof(ESTRUC_));

    *(ESTRUC_ *)arr.code = *e;              /* arr->code contains e */
    arr.type = 1;                           /* type field: # of active e's */
    return (&arr);
}
