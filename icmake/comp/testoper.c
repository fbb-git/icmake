/*
                                T E S T O P E R . C
*/

#include "iccomp.h"

int test_operand(e, opcode)
    ESTRUC_
        *e;
    OPCODE_
        opcode;
{
    register int
        ret;

    if ( (ret = !test_type(e, optype[opcode])) )
        semantic(illegal_type, opstring[opcode]);

    return (ret);
}
