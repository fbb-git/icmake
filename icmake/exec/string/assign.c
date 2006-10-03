#include "string.ih"

void stringAssign(STRINGVAR_ *lhs, STRINGVAR_ const *rhs)
{
    if (lhs != rhs)
    {
        destructor(lhs);
        *lhs = *rhs;
        varIncCount(lhs);
    }
}

