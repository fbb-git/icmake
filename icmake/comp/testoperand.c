#include "iccomp.h"

int test_operand(ESTRUC_ *e, OPCODE_ opcode)
{
    register int ret;

    if ( (ret = !test_type(e, optype[opcode])) )
        semantic(illegal_type, opstring[opcode]);

    return ret;
}
