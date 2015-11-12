/*
                   Push an expression value on the stack
*/

#include "parser.ih"

void p_expr2stack(SemVal *e)
{
    SemVal pre;

    switch
    (
        test_type
        (
            e,
            e_const | e_var | e_bool | e_reg  |
                      e_pre_inc_dec | e_post_inc_dec
        )
    )
    {
        case e_const:
            p_generateCode(e,
                       test_type(e, e_int) ?
                           op_push_imm
                        :
                           op_push_strconst,
                    e->evalue);
        break;

        case e_var:
            if (!e->codelen)
                p_generateCode(e, op_push_var, e->evalue);
        break;

        case e_bool:
            p_patchupTrue(e, 1);
            p_generateCode(e, op_push_1_jmp_end);
            p_patchupFalse(e, 1);
            p_generateCode(e, op_push_0);
            set_type(e, e_int);
        break;

        case e_reg:
            p_generateCode(e, op_push_reg);
        break;

        case e_post_inc_dec:
            pre = *p_stackFrame(0);
            p_generateCode(&pre, op_push_var, e->evalue);
            *e = *p_catCode(&pre, e);     /* prefix push before var++, var-- */
        break;

        case e_pre_inc_dec:             /* append push after ++var, --var */
            p_generateCode(e, op_push_var, e->evalue);
        break;
    }
    down_type(e, e_const | e_var | e_bool | e_reg |
                 e_pre_inc_dec | e_post_inc_dec);
    up_type(e, e_stack);
}
