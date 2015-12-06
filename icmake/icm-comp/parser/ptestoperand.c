#include "parser.ih"

int p_testOperand(SemVal *e, Opcode opcode)
{
    register int ret = !test_type(e, gp_opType[opcode]); /* 0: type error */

    if (ret)
        util_semantic(gp_illegalType, gp_opstring[opcode]);

    return ret;
}
