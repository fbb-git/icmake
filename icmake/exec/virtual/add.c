#include "virtual.ih"

void    add(VAR_ *lhs, VAR_ const *rhs)
{
    p_add[typeIdx(rhs)](lhs, rhs);
}

