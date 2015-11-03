/*
                             A S S I G N . C
*/

#include "parser.ih"

SemVal *assign(SemVal *lval, SemVal *rval)
{
    return assignment(lval, rval, "=");
}
