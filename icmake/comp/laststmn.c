/*
                                L A S T S T M N . C
*/

#include "iccomp.h"

void last_stmnt(lval)
    ESTRUC_
        *lval;
{
    patchup_false(lval, 1);

    outbin(lval->code, lval->codelen);
    discard(lval);
}
