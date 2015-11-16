#include "int.ih"

void intAssign(Variable *lhs, Variable const *rhs)
{
    destructor(lhs);
    *lhs = *rhs;
}

