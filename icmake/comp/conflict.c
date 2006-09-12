/*
                        C O N F L I C T . C
*/

#include "iccomp.h"

int conflict(lval, rval, opcode)
    ESTRUC_
        *lval,
        *rval;
    OPCODE_
        opcode;
{
    register int
        ret;

    if ( (ret = !(lval->type & rval->type & optype[opcode])) )
    {
        semantic(type_conflict, opstring[opcode]);
        clearbin(lval, rval);
    }
    return (ret);
}
