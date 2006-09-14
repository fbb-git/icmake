/*
                            X O R . C
*/

#include "iccomp.h"

ESTRUC_ *xor (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_xor, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_xor))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & ~ALLTYPES) == e_const)
        lval->evalue ^= rval->evalue;
    else  if (initialization)
    {
        semantic(init_expr_not_const);
        return nullframe(lval);
    }

    defcode(lval, rval, op_xor);

    return (lval);                          /* return new expression */
}
