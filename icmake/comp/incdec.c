/*
                            I N C D E C . C
*/

#include "iccomp.h"

ESTRUC_ *incdec (pp, opcode, e)
    PREPOST_
        pp;
    OPCODE_
        opcode;
    ESTRUC_
        *e;
{
    register size_t
        varnr;

    if (test_operand(e, opcode))
    {
        semantic(illegal_type, opstring[opcode]);
        return (e);
    }

    if (!test_type(e, e_var))
    {
        semantic(lvalue_needed, opstring[opcode]);
        return (e);
    }

    varnr = e->evalue;
    e->codelen = 0;                         /* INITIALIZED CODELEN HERE */

    gencode(e, opcode, varnr);              /* Generate INC/DEC opcode */

    e->type =                               /* Indicate pre/post inc- decrement */
            (pp == pre_op) ?
                e_code | e_int | e_pre_inc_dec
            :
                e_code | e_int | e_post_inc_dec;

    return (e);
}
