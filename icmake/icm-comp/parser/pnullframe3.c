#include "parser.ih"

SemVal *p_nullFrame3(SemVal *e1, SemVal *e2, SemVal *e3)
{
    if (e3)
        p_discard(e3);

    p_discard(e2);
    p_discard(e1);
    *e1 = *p_stackFrame(e_null);
    return e1;
}
