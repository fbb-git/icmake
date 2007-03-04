/*
                            E T O C . C

                   Convert expression to pure code
*/

#include "iccomp.h"

void etoc(ESTRUC_ *e)
{
    ESTRUC_ pre;

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
            gencode(e,
                       test_type(e, e_int) ?
                           op_push_imm
                        :
                           op_push_strconst,
                    e->evalue);
        break;

        case e_var:
            if (!e->codelen)
                gencode(e, op_push_var, e->evalue);
        break;

        case e_bool:
            patchup_true(e, 1);
            gencode(e, op_push_1_jmp_end);
            patchup_false(e, 1);
            gencode(e, op_push_0);
            set_type(e, e_int);
        break;

        case e_reg:
            gencode(e, op_push_reg);
        break;

        case e_post_inc_dec:
            pre = *stackframe(0);
            gencode(&pre, op_push_var, e->evalue);
            *e = *catcode(&pre, e);         /* prefix push before var++, var-- */
        break;

        case e_pre_inc_dec:                 /* append push after ++var, --var */
            gencode(e, op_push_var, e->evalue);
        break;
    }
    down_type(e, e_const | e_var | e_bool | e_reg |
                 e_pre_inc_dec | e_post_inc_dec);
    up_type(e, e_code);
}
