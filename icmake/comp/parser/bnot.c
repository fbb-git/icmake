/*
                             B N O T . C
*/

#include "parser.ih"

SemVal *bnot(SemVal *e)                   /* expression so far */
{
    if (test_operand(e, op_bnot))            /* test types ok */
    {
        util_semantic(gp_illegalType, gp_opstring[op_bnot]);
        return e;
    }

    if ((e->type & (size_t)~e_typeMask) == e_const)   /* immediate value */
        e->evalue = ~e->evalue;
    else
    {
        eToStack(e);                            /* convert to code */
        gencode(e, op_bnot);                /* generate instruction */
    }

    return e;
}
