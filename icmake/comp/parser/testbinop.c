#include "parser.ih"

int test_binop(OPCODE_ opcode, ESTRUC_ *lval, ESTRUC_ *rval)
{
    register int ret;

    if
    (
        (ret =
         (
            test_operand(lval, opcode)
            ||
            test_operand(rval, opcode)
         )
        )
    )
        clearbin(rval, lval);

    return ret;
}
