#include "list.ih"

void listAssign(LISTVAR_ *lhs, LISTVAR_ const *rhs)
{
    if (lhs != rhs)
    {
        destructor(lhs);
        *lhs = *rhs;
        varIncCount(lhs);
    }
}

