#include "string.ih"

void stringDestructor(Variable *var)
{
    if (var_decCount(var) == 0)
        free(var->vu.i->ls.str);
}

