/*
                            B O R . C
*/

#include "iccomp.h"

ESTRUC_ *bor (ESTRUC_ *lval, ESTRUC_ *rval)
{
    if (test_binop(op_bor, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_bor))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & (size_t)~ALLTYPES) == e_const)
        lval->evalue |= rval->evalue;
    else
        defcode(lval, rval, op_bor);

    return (lval);                          /* return new expression */
}
