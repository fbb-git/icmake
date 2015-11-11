#include "parser.ih"

SemVal *icast(SemVal *e)
{
    if (test_type(e, e_list))               /* (int)list not ok */
    {
        util_semantic(gp_illegalCast);
        discard(e);
        set_type(e, e_int | e_const);
    }
    else if (test_type(e, e_str))           /* (int)string ok */
    {
        if (test_type(e, e_const))          /* string const to a */
        {
            e->evalue =                      /* convert to string */
                atoi(gp_stringTable[e->evalue].string);
            set_type(e, e_const | e_int);
        }
        else
        {
            eToStack(e);                        /* convert to code */
            gencode(e, op_atoi);            /* runtime conversion needed */
            set_type(e, e_int | e_stack);
        }
    }
    return e;
}
