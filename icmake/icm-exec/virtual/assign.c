#include "virtual.ih"

void assign(Variable *lhs, Variable const *rhs)
{
    p_assign[typeIdx(rhs)](lhs, rhs);
}

