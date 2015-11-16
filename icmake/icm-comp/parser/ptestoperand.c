#include "parser.ih"

int p_testOperand(SemVal *e, Opcode opcode)
{
    register int ret;

    if ( (ret = !test_type(e, gp_opType[opcode])) )
        util_semantic(gp_illegalType, gp_opstring[opcode]);

    return ret;
}
