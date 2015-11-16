/*#define msg
*/

#include "parser.ih"

SemVal *p_incDec(PREPOST_ pp, OPCODE_ opcode, SemVal *e)
{
    register size_t varnr;

    if (p_testOperand(e, opcode))
    {
        util_semantic(gp_illegalType, gp_opstring[opcode]);
        return (e);
    }

    if (!test_type(e, e_var))
    {
        util_semantic(gp_lvalueNeeded, gp_opstring[opcode]);
        return (e);
    }

    varnr = e->evalue;
    e->codelen = 0;                     /* INITIALIZED CODELEN HERE */

    msg("   inc/dec opcode BEGIN");
    p_generateCode(e, opcode, varnr);          /* Generate INC/DEC opcode */
    msg("   inc/dec opcode END");

    e->type =                           /* Indicate pre/post inc- decrement */
            (pp == pre_op) ?
                e_int | e_pre_inc_dec       /* NB: no e_stack yet: push the  */
            :                               /*     value on the stack when  */
                e_int | e_post_inc_dec;     /*     required                 */

    return e;
}
