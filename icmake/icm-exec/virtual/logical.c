#include "virtual.ih"

int     logical(VAR_ const *lhs)
{
    return p_logical[typeIdx(lhs)](lhs);
}

