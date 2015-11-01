#include "parser.ih"

ESTRUC_ *lcast(ESTRUC_ *e)
{
    if (test_type(e, e_int))               /* (int)list not ok */
    {
        semantic(gp_illegalCast);
        discard(e);
        set_type(e, e_list | e_var);
    }
    else if (test_type(e, e_str))         /* (string)int ok */
    {
        etoc(e);                          /* convert to code */
        gencode(e, op_atol);
        set_type(e, e_code | e_list);
    }
    return (e);
}
