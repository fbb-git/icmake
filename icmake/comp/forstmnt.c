/*
                                F O R S T M N T . C
*/

#include "iccomp.h"

ESTRUC_ *for_stmnt(init, cond, inc, stmnt)
    ESTRUC_
        *init,
        *cond,
        *inc,
        *stmnt;
{
    cat_stmnt(stmnt, inc);                  /* catenate inc to stmt */
    while_stmnt(cond, stmnt);               /* create while-stmnt */
    return (catcode(init, cond));           /* return final code */
}
