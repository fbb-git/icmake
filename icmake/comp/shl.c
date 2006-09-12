/*
                            S H L . C
*/

#include "iccomp.h"

ESTRUC_ *shl (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_shl, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_shl))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & ~ALLTYPES) == e_const)
        lval->evalue <<= rval->evalue;
    else
        defcode(lval, rval, op_shl);

    return (lval);                          /* return new expression */
}
