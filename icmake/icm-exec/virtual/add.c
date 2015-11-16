#include "virtual.ih"

void   virtual_add(Variable *lhs, Variable const *rhs)
{
    p_add[var_typeValue(rhs)](lhs, rhs);
}

