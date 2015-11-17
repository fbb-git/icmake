#include "string.ih"

void stringDestructor(Variable const *var)
{
    if (var_decCount(var) == 0)
    {
        free(var->vu.i->ls.str);
        free(var->vu.i);
    }
}

