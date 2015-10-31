#include "iccomp.h"

ESTRUC_ *for_stmnt(ESTRUC_ *init, ESTRUC_ *cond, ESTRUC_ *inc, ESTRUC_ *stmnt)
{
    size_t codelen = stmnt->codelen;

    patchup_continue(stmnt, codelen);

    cat_stmnt(stmnt, inc);                  /* catenate inc to stmt */


    while_stmnt(cond, stmnt, 0);            /* create while-stmnt */

    return catcode(init, cond);             /* return final code */
}
