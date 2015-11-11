#include "parser.ih"

SemVal *young(SemVal *lval, SemVal *rval)
{
    if (test_binop(op_younger, lval, rval))
        return lval;                        /* test for correct types */

    eToStack(lval);                             /* convert to code */
    eToStack(rval);

    defcode(lval, rval, op_younger);

    return lval;                            /* return new expression */
}
