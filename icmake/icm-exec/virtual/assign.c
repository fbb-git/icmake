#include "virtual.ih"

void virtual_assign(Variable *lhs, Variable const *rhs)
{
    p_assign[var_typeValue(rhs)](lhs, rhs);
}

