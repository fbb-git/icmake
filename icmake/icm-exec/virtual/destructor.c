#include "virtual.ih"

void destructor(Variable const *lhs)
{
    register ExprType type = var_typeValue(lhs);

    if (type & e_typeMask)
        p_destructor[type](lhs);
}

