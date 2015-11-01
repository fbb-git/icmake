#include "parser.ih"

static ESTRUC_ e;

ESTRUC_ *zeroargs(E_TYPE_ type)
{
    e = *stackframe(0);                     /* reinitialize e */
    callrss(&e, type);

    return &e;
}
