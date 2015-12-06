#include "parser.ih"

int p_testBinOp(Opcode opcode, SemVal *lval, SemVal *rval)
{
    if (! p_trySIconvert(lval, rval))
        p_trySIconvert(rval, lval);

    return p_testOperand(lval, opcode)  /* returns 0 if no errors */
           ||
           p_testOperand(rval, opcode);
}
