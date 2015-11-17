#include "var.ih"

uint16_t var_decCount(Variable const *var)
{
    return --((Variable *)var)->vu.i->count;
}
