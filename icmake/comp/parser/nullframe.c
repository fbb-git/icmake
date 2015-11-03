#include "parser.ih"

SemVal *nullframe(SemVal *e)
{
    discard(e);
    *e = *stackframe(0);
    return e;
}
