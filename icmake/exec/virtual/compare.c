#include "virtual.ih"

void compare(VAR_ *lhs, VAR_ const *rhs)
{
    p_compare[typeIdx(rhs)](lhs, rhs);
}

