#include "parser.ih"

SemVal *p_nullFrame(SemVal *e)
{
    p_discard(e);
    *e = *p_stackFrame(0);
    return e;
}
