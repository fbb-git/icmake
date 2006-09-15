/*
                            Y O U N G . C
*/

#include "iccomp.h"

ESTRUC_ *young (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_younger, lval, rval))
        return (lval);                      /* test for correct types */

    etoc(lval);                             /* convert to code */
    etoc(rval);

    defcode(lval, rval, op_younger);

    return (lval);                          /* return new expression */
}
