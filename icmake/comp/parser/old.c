#include "parser.ih"

SemVal *old(SemVal *lval, SemVal *rval)
{

    if (test_binop(op_older, lval, rval))
        return (lval);                      /* test for correct types */

    eToStack(lval);                             /* convert to code */
    eToStack(rval);

    defcode(lval, rval, op_older);

    return (lval);                          /* return new expression */
}


