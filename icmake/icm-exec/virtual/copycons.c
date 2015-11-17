#include "virtual.ih"

Variable const *copycons(Variable const *other)
{
    return p_copycons[var_typeValue(other)](other);
}

