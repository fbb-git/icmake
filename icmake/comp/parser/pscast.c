#include "parser.ih"

SemVal *p_sCast(SemVal *e)
{
    char buffer[10];

    if (test_type(e, e_list))               /* (string)list not ok */
    {
        util_semantic(gp_illegalCast);
        p_discard(e);
        set_type(e, e_str | e_const);
    }
    else if (test_type(e, e_int))           /* (string)int ok */
    {
        if (test_type(e, e_const))
        {
            sprintf(buffer, "%u", 
                  (unsigned)e->evalue);     /* convert to string */
            e->evalue = p_findString(buffer);
            set_type(e, e_const | e_str);
        }
        else
        {
            p_expr2stack(e);                        /* convert to code */
            p_generateCode(e, op_itoa);
            set_type(e, e_stack | e_str);
        }
    }
    return e;
}
