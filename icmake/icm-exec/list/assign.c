#include "list.ih"

void list_assign(ListVariable *lhs, ListVariable const *rhs)
{
    if (lhs != rhs)
    {
        destructor(lhs);
        *lhs = *rhs;
        var_incCount(lhs);
    }
}

