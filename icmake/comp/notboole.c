/*
                                N O T B O O L E . C
*/

#include "iccomp.h"

ESTRUC_ *not_boolean(e)
    ESTRUC_
        *e;
{
    unsigned
        len,
        *list;

    if (test_type(e, e_const))                  /* immediate value */
    {
        e->evalue = !(test_type(e, e_str) || e->evalue);
        set_type(e, e_int | e_const);
    }
    else
    {
        if (initialization)
        {
            semantic(init_expr_not_const);
            return nullframe(e);
        }

        fetob(e);

        len = e->truelen;                   /* cross the links */
        e->truelen = e->falselen;
        e->falselen = len;

        list = e->truelist;
        e->truelist = e->falselist;
        e->falselist = list;
    }
    return (e);
}
