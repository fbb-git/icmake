#include "string.ih"

void stringAssign(String *lhs, String const *rhs)
{
    if (lhs != rhs)
    {
        destructor(lhs);
        *lhs = *rhs;
        varIncCount(lhs);
    }
}

