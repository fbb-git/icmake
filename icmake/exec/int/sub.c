#include "int.ih"

void int_sub(Variable *lhs, Variable const *rhs)
{
    int_assignInt(lhs, int_value(lhs) - int_value(rhs));
}

