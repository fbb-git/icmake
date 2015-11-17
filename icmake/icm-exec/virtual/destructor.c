#include "virtual.ih"

void destructor(Variable const *lhs)
{
    p_destructor[var_typeValue(lhs)](lhs);
}

