#include "virtual.ih"

void    add(Variable *lhs, Variable const *rhs)
{
    p_add[typeIdx(rhs)](lhs, rhs);
}

