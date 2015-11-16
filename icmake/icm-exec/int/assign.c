#include "int.ih"

void int_assign(Variable *lhs, Variable const *rhs)
{
    destructor(lhs);
    *lhs = *rhs;
}

