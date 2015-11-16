#include "virtual.ih"

void subtract(Variable *lhs, Variable const *rhs)
{
    p_sub[typeIdx(rhs)](lhs, rhs);
}

