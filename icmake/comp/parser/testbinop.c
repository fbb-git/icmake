#include "parser.ih"

int test_binop(OPCODE_ opcode, SemVal *lval, SemVal *rval)
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
