#define msgx
#include "parser.ih"

SemVal *p_young(SemVal *lval, SemVal *rval)
{
    msg("start");
    if (p_testBinOp(op_younger, lval, rval))
        return p_nullFrame(lval, rval);     /* test for correct types */

    p_expr2stack(lval);                     /* convert to code */
    p_expr2stack(rval);

    p_binOp(lval, rval, op_younger);

    return lval;                            /* return new expression */
}
