#include "int.ih"

void intAssign(VAR_ *lhs, VAR_ const *rhs)
{
    destructor(lhs);
    *lhs = *rhs;
}

