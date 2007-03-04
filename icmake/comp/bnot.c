/*
                             B N O T . C
*/

#include "iccomp.h"

ESTRUC_ *bnot (ESTRUC_ *e)                   /* expression so far */
{
    if (test_operand(e, op_bnot))            /* test types ok */
    {
        semantic(illegal_type, opstring[op_bnot]);
        return (e);
    }

    if ((e->type & (size_t)~ALLTYPES) == e_const)   /* immediate value */
        e->evalue = ~e->evalue;
    else
    {
        etoc(e);                            /* convert to code */
        gencode(e, op_bnot);                /* generate instruction */
    }

    return (e);
}
