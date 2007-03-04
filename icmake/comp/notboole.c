/*
                                N O T B O O L E . C
*/

#include "iccomp.h"

ESTRUC_ *not_boolean(e)
    ESTRUC_
        *e;
{
    size_t len;
    unsigned *list;

    if (test_type(e, e_const))                  /* immediate value */
    {
        e->evalue = !(test_type(e, e_str) || e->evalue);
        set_type(e, e_int | e_const);
    }
    else
    {
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
