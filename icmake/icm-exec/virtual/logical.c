#include "virtual.ih"

int     logical(Variable const *lhs)
{
    return p_logical[var_typeValue(lhs)](lhs);
}

