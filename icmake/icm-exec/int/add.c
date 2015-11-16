#include "int.ih"

void int_add(Variable *lhs, Variable const *rhs)
{
    int_assignInt(lhs, int_value(lhs) + int_value(rhs));
}

