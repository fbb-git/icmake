#include "var.ih"

uint16_t var_count(Variable const *var)
{
    return var->vu.i->count;
}
