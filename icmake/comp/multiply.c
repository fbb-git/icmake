/*
                            M U L T I P L Y . C
*/

#include "iccomp.h"

ESTRUC_ *multiply (lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    if (test_binop(op_mul, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_mul))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & ~ALLTYPES) == e_const)
        lval->evalue *= rval->evalue;
    else if (initialization)
    {
        semantic(init_expr_not_const);
        return nullframe(lval);
    }

    defcode(lval, rval, op_mul);

    return (lval);                          /* return new expression */
}
