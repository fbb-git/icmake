/*
                             A S S I G N . C
*/

#include "parser.ih"

SemVal *p_assign(SemVal *lval, SemVal *rval)
{
    return p_assignment(lval, rval, "=");
}
