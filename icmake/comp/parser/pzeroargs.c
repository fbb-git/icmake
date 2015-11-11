#include "parser.ih"

static SemVal e;

SemVal *p_zeroArgs(ExprType type)
{
    e = *p_stackFrame(0);                     /* reinitialize e */
    p_callRss(&e, type);

    return &e;
}
