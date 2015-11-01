#include "parser.ih"

ESTRUC_ *nullframe(ESTRUC_ *e)
{
    discard(e);
    *e = *stackframe(0);
    return e;
}
