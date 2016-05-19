#include "virtual.ih"

void virtual_sub(Variable *lhs, Variable const *rhs)
{
    p_sub[var_typeValue(rhs)](lhs, rhs);
}

