/*
                             A S S I G N . C
*/

#include "iccomp.h"

ESTRUC_ *assign(lval, rval)
    ESTRUC_
        *lval,
        *rval;
{
    return (assignment(lval, rval, "="));
}
