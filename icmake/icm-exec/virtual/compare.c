#include "virtual.ih"

void compare(Variable *lhs, Variable const *rhs)
{
    p_compare[typeIdx(rhs)](lhs, rhs);
}

