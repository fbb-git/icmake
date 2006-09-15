/*
                                Z E R O A R G S . C
*/

#include "iccomp.h"

static ESTRUC_
    e;

ESTRUC_ *zeroargs(type)
    E_TYPE_
        type;
{
    e = stackframe(0);                      /* reinitialize e */

//    if (initialization)
//    {
//        semantic(init_expr_not_const);
//        return &e;
//    }

    callrss(&e, type);

    return (&e);
}
