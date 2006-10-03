#include "virtual.ih"

void destructor(VAR_ *lhs)
{
    p_destructor[typeIdx(lhs)](lhs);
}

