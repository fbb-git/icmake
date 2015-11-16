#include "int.ih"

void intSub(Variable *lhs, Variable const *rhs)
{
    intSetValue(lhs, intValue(lhs) - intValue(rhs));
}

