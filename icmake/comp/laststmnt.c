#include "iccomp.h"

void last_stmnt(ESTRUC_ *lval)
{
    patchup_false(lval, 1);

    outbin(lval->code, lval->codelen);
    discard(lval);
}
