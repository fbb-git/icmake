#include "iccomp.h"

ESTRUC_ *for_stmnt(ESTRUC_ *init, ESTRUC_ *cond, ESTRUC_ *inc, ESTRUC_ *stmnt)
{
    cat_stmnt(stmnt, inc);                  /* catenate inc to stmt */
    while_stmnt(cond, stmnt);               /* create while-stmnt */
    return catcode(init, cond);             /* return final code */
}
