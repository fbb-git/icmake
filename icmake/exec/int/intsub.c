#include "int.ih"

void intSub(VAR_ *lhs, VAR_ const *rhs)
{
    intSetValue(lhs, intValue(lhs) - intValue(rhs));
}

