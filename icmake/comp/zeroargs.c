/*
                                Z E R O A R G S . C
*/

#include "iccomp.h"

static ESTRUC_
    e;

ESTRUC_ *zeroargs(E_TYPE_ type)
{
    e = *stackframe(0);                     /* reinitialize e */
    callrss(&e, type);

    return &e;
}
