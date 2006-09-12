/*
                                T E S T B I N O . C
*/

#include "iccomp.h"

int test_binop(opcode, lval, rval)
    OPCODE_
        opcode;
    ESTRUC_
        *lval,
        *rval;
{
    register int
        ret;

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

    return(ret);
}
