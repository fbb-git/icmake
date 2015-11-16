#include "virtual.ih"

void destructor(Variable *lhs)
{
    p_destructor[var_typeValue(lhs)](lhs);
}

