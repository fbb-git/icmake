#include "var.ih"

uint16_t varCount(Variable *var)
{
    return var->vu.i->count;
}
