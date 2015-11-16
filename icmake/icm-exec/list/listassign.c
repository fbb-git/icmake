#include "list.ih"

void listAssign(ListVariable *lhs, ListVariable const *rhs)
{
    if (lhs != rhs)
    {
        destructor(lhs);
        *lhs = *rhs;
        varIncCount(lhs);
    }
}

