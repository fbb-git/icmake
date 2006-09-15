/*
                             N E G A T E . C
*/

#include "iccomp.h"

ESTRUC_ *negate(ESTRUC_ *e)                  /* expression so far */
{
    if (test_operand(e, op_umin))            /* test types ok */
    {
        semantic(illegal_type, opstring[op_umin]);
        return (e);
    }

    if (e->type & e_const)                  /* immediate value */
        e->evalue = -(int)e->evalue;
    else
    {
        etoc(e);                            /* convert to code */
        gencode(e, op_umin);                /* generate instruction */
    }

    return (e);
}
