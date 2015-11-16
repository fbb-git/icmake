#include "int.ih"

void intAdd(Variable *lhs, Variable const *rhs)
{
    intSetValue(lhs, intValue(lhs) + intValue(rhs));
}

