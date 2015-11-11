#include "parser.ih"

SemVal *negate(SemVal *e)                  /* expression so far */
{
    if (test_operand(e, op_umin))            /* test types ok */
    {
        util_semantic(gp_illegalType, gp_opstring[op_umin]);
        return (e);
    }

    if (e->type & e_const)                  /* immediate value */
        e->evalue = -(int)e->evalue;
    else
    {
        eToStack(e);                            /* convert to code */
        gencode(e, op_umin);                /* generate instruction */
    }

    return (e);
}
