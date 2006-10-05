#include "virtual.ih"

void assign(VAR_ *lhs, VAR_ const *rhs)
{
    p_assign[typeIdx(rhs)](lhs, rhs);
}

