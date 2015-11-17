#include "virtual.ih"

int virtual_bool(Variable const *lhs)
{
    return p_bool[var_typeValue(lhs)](lhs);
}

