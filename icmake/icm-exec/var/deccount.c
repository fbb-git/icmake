#include "var.ih"

uint16_t var_decCount(Variable *var)
{
    return --var->vu.i->count;
}
