#include "parser.ih"

SemVal *multiply (SemVal *lval, SemVal *rval)
{
    if (test_binop(op_mul, lval, rval))
        return (lval);                      /* test for correct types */

    btoi(lval);                             /* convert pending booleans */
    btoi(rval);

    if (conflict(lval, rval, op_mul))       /* test type conflict */
        return(lval);

    if ((lval->type & rval->type & (size_t)~e_typeMask) == e_const)
        lval->evalue *= rval->evalue;
    else
        defcode(lval, rval, op_mul);

    return (lval);                          /* return new expression */
}
