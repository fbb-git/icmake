#include "virtual.ih"

Variable *copycons(Variable const *other)
{
    return p_copycons[var_typeValue(other)](other);
}

