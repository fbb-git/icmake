#include "virtual.ih"

void constructor(Variable *var, ExprType type)
{
    return p_constructor[
                type & e_list   ? 2 : 
                type & e_str    ? 1 : 
                                  0
            ](var);
}

