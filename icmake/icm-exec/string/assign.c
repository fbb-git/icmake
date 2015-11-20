#include "string.ih"

void string_assign(String *lhs, String const *rhs)
{
    if (lhs != rhs)
    {
        destructor(lhs);
        *lhs = *rhs;
        var_incShared(lhs);
    }
}

