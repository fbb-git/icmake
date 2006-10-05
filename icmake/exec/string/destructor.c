#include "string.ih"

void stringDestructor(VAR_ *var)
{
    if (varDecCount(var) == 0)
        free (var->vu.i->ls.str);
}

