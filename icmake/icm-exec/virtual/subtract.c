#include "virtual.ih"

void virtual_subtract(Variable *lhs, Variable const *rhs)
{
    p_sub[var_typeValue(rhs)](lhs, rhs);
}

