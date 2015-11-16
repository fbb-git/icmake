#include "virtual.ih"

Variable *copyCons(Variable const *other)
{
    return p_copycons[typeIdx(other)](other);
}

