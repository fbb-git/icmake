#include "parser.ih"

int p_testBinOp(Opcode opcode, SemVal **lval, SemVal *rval)
{
    register int ret;

    if (! p_trySIconvert(*lval, rval))
        p_trySIconvert(rval, *lval);


    if
    (
        (ret =
         (
            p_testOperand(*lval, opcode)
            ||
            p_testOperand(rval, opcode)
         )
        )
    )
        p_clearOperands(lval, rval);

    return ret;
}
