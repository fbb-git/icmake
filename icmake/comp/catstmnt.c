/*
                         C A T S T M N T . C
*/

#include "iccomp.h"

ESTRUC_ *cat_stmnt(lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    patchup_false(lval, 1);

    if (!nestlevel)
    {
        outbin(lval->code, lval->codelen);
        discard(lval);
        return (rval);
    }

    return (catcode(lval, rval));
}
