#include "parser.ih"

int p_testBinOp(OPCODE_ opcode, SemVal *lval, SemVal *rval)
{
    register int ret;

    if
    (
        (ret =
         (
            p_testOperand(lval, opcode)
            ||
            p_testOperand(rval, opcode)
         )
        )
    )
        p_clearOperands(rval, lval);

    return ret;
}
