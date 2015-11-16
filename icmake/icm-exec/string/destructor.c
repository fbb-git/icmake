#include "string.ih"

void stringDestructor(Variable *var)
{
    if (varDecCount(var) == 0)
        free (var->vu.i->ls.str);
}

