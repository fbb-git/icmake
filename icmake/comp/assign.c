/*
                             A S S I G N . C
*/

#include "iccomp.h"

ESTRUC_ *assign(ESTRUC_ *lval, ESTRUC_ *rval)
{
    return assignment(lval, rval, "=");
}
