#include "parser.ih"

SemVal *p_old(SemVal *lval, SemVal *rval)
{
    if (p_testBinOp(op_older, &lval, rval))
        return lval;                        /* test for correct types */

    p_expr2stack(lval);                     /* convert to code */
    p_expr2stack(rval);

    p_binOp(lval, rval, op_older);

    return lval;                            /* return new expression */
}


