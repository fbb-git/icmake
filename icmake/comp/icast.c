/*
                                    I C A S T . C
*/

#include "iccomp.h"

ESTRUC_ *icast(e)
    ESTRUC_
        *e;
{
    if (test_type(e, e_list))               /* (int)list not ok */
    {
        semantic(illegal_cast);
        discard(e);
        set_type(e, e_int | e_const);
    }
    else if (test_type(e, e_str))           /* (int)string ok */
    {
        if (test_type(e, e_const))          /* string const to a */
        {
            e->evalue =                      /* convert to string */
                atoi(stringtab[e->evalue].string);
            set_type(e, e_const | e_int);
        }
        else
        {
            etoc(e);                        /* convert to code */
            gencode(e, op_atoi);            /* runtime conversion needed */
            set_type(e, e_int | e_code);
        }
    }
    return (e);
}
