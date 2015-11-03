#include "parser.ih"

static SemVal e;

SemVal *zeroargs(ExprType type)
{
    e = *stackframe(0);                     /* reinitialize e */
    callrss(&e, type);

    return &e;
}
