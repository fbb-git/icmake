/*
                            B O R . C
*/

#include "iccomp.h"

ESTRUC_ *bor (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_bor, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_bor))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & ~ALLTYPES) == e_const)
        lval->evalue |= rval->evalue;
    else  if (initialization)
    {
        semantic(init_expr_not_const);
        return nullframe(lval);
    }

    defcode(lval, rval, op_bor);

    return (lval);                          /* return new expression */
}
