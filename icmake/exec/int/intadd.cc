#include "int.ih"

void intAdd(VAR_ *lhs, VAR_ const *rhs)
{
    intSetValue(lhs, intValue(lhs) + intValue(rhs));
}

