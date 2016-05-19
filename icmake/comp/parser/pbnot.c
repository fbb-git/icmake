/*
                             B N O T . C
*/

#include "parser.ih"

SemVal *p_not(SemVal *e)                   /* expression so far */
{
    if (p_testOperand(e, op_bnot))            /* test types ok */
    {
        util_semantic(gp_illegalType, gp_opstring[op_bnot]);
        return e;
    }

    if ((e->type & (unsigned)~e_typeMask) == e_const)   /* immediate value */
        e->evalue = ~e->evalue;
    else
    {
        p_expr2stack(e);                            /* convert to code */
        p_generateCode(e, op_bnot);                /* generate instruction */
    }

    return e;
}
