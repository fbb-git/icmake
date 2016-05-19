#include "virtual.ih"

void copycons(Variable *var, Variable const *other)
{
    p_copycons[var_typeValue(other)](var, other);
}

