#include "parser.ih"

SemVal *scast(SemVal *e)
{
    char buffer[10];

    if (test_type(e, e_list))               /* (string)list not ok */
    {
        util_semantic(gp_illegalCast);
        discard(e);
        set_type(e, e_str | e_const);
    }
    else if (test_type(e, e_int))           /* (string)int ok */
    {
        if (test_type(e, e_const))
        {
            sprintf(buffer, "%u", 
                  (unsigned)e->evalue);     /* convert to string */
            e->evalue = lookstring(buffer);
            set_type(e, e_const | e_str);
        }
        else
        {
            etoc(e);                        /* convert to code */
            gencode(e, op_itoa);
            set_type(e, e_code | e_str);
        }
    }
    return e;
}
