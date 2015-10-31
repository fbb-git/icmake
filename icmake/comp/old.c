#include "iccomp.h"

ESTRUC_ *old(ESTRUC_ *lval, ESTRUC_ *rval)
{

    if (test_binop(op_older, lval, rval))
        return (lval);                      /* test for correct types */

    etoc(lval);                             /* convert to code */
    etoc(rval);

    defcode(lval, rval, op_older);

    return (lval);                          /* return new expression */
}


