/* Force conversion of expression to boolean expression */

#include "parser.ih"

void p_forceExpr2Bool(SemVal *e)
{
    if (test_type(e, e_bool))
        return;                             /* done if boolean aloready */

    p_expr2stack(e);                            /* convert to code unless bool */
    p_generateCode (e, op_jmp_true);
    p_generateCode (e, op_jmp, j_falselist);
    set_type(e, e_stack | e_bool);
}
