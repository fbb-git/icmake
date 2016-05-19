#include "parser.ih"

SemVal *p_notBoolean(SemVal *e)
{
    unsigned len;
    unsigned *list;

    if (test_type(e, e_const))                  /* immediate value */
    {
        e->evalue = !(test_type(e, e_str) || e->evalue);
        set_type(e, e_int | e_const);
    }
    else
    {
        p_forceExpr2Bool(e);

        len = e->truelen;                   /* cross the links */
        e->truelen = e->falselen;
        e->falselen = len;

        list = e->truelist;
        e->truelist = e->falselist;
        e->falselist = list;
    }
    return (e);
}
