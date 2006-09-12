/*
                                    L C A S T . C
*/

#include "iccomp.h"

ESTRUC_ *lcast(e)
    ESTRUC_
        *e;
{
    if (test_type(e, e_int))               /* (int)list not ok */
    {
        semantic(illegal_cast);
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
