/*
                             A S S I G N . C
*/

#include "parser.ih"

ESTRUC_ *assign(ESTRUC_ *lval, ESTRUC_ *rval)
{
    return assignment(lval, rval, "=");
}
