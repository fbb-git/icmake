#include "parser.ih"

ESTRUC_ *incdec(PREPOST_ pp, OPCODE_ opcode, ESTRUC_ *e)
{
    register size_t
        varnr;

    if (test_operand(e, opcode))
    {
        semantic(gp_illegalType, gp_opstring[opcode]);
        return (e);
    }

    if (!test_type(e, e_var))
    {
        semantic(gp_lvalueNeeded, gp_opstring[opcode]);
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
