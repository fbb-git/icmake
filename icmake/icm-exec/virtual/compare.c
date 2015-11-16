#include "virtual.ih"

void virtual_compare(Variable *lhs, Variable const *rhs)
{
    p_compare[var_typeValue(rhs)](lhs, rhs);
}

