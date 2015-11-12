#include "parser.ih"

SemVal *p_negate(SemVal *e)                  /* expression so far */
{
    if (p_testOperand(e, op_umin))            /* test types ok */
    {
        util_semantic(gp_illegalType, gp_opstring[op_umin]);
        return (e);
    }

    if (e->type & e_const)                  /* immediate value */
        e->evalue = -(int)e->evalue;
    else
    {
        p_expr2stack(e);                            /* convert to code */
        p_generateCode(e, op_umin);                /* generate instruction */
    }

    return (e);
}
