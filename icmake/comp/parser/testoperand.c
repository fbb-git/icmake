#include "parser.ih"

int test_operand(ESTRUC_ *e, OPCODE_ opcode)
{
    register int ret;

    if ( (ret = !test_type(e, gp_opType[opcode])) )
        semantic(gp_illegalType, gp_opstring[opcode]);

    return ret;
}
