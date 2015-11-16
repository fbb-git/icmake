#include "virtual.ih"

void destructor(Variable *lhs)
{
    p_destructor[typeIdx(lhs)](lhs);
}

