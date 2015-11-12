#include "virtual.ih"

void subtract(VAR_ *lhs, VAR_ const *rhs)
{
    p_sub[typeIdx(rhs)](lhs, rhs);
}

