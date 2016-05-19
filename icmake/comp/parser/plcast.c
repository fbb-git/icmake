#include "parser.ih"

SemVal *p_lCast(SemVal *e)
{
    if (test_type(e, e_int))               /* (int)list not ok */
    {
        util_semantic(gp_illegalCast);
        p_discard(e);
        set_type(e, e_list | e_var);
    }
    else if (test_type(e, e_str))         /* (string)int ok */
    {
        p_expr2stack(e);                          /* convert to code */
        p_generateCode(e, op_atol);
        set_type(e, e_stack | e_list);
    }
    return (e);
}
