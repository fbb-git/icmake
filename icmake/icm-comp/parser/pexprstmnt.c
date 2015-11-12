#include "parser.ih"

SemVal *p_expression(SemVal *e)
{
    p_bool2int(e);                                /* convert boolean to i */

    if (gp_lastOp == op_copy_var)
        p_popVar(e);
    else if
    (
        test_type(e, e_stack)
        &&
        !test_type(e, e_pre_inc_dec | e_post_inc_dec)
    )
        p_generateCode(e, op_asp, 1);

    return (e);
}
