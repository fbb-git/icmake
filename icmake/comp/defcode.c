/*
                            D E F C O D E . C
*/

#include "iccomp.h"

void defcode (lval, rval, opcode)
    ESTRUC_
        *lval,
        *rval;
    OPCODE_
        opcode;
{
    etoc(lval);                     /* convert to code */
    etoc(rval);
    catcode(lval, rval);
    gencode(lval, opcode);          /* append instruction */
    set_type(lval, e_int | e_code); /* set appropriate type */
}
