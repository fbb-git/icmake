#include "virtual.ih"

VAR_ *copyCons(VAR_ const *other)
{
    return p_copycons[typeIdx(other)](other);
}

