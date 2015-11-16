#include "virtual.ih"

int     logical(Variable const *lhs)
{
    return p_logical[typeIdx(lhs)](lhs);
}

