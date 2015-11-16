#include "var.ih"

uint16_t varDecCount(Variable *var)
{
    return --var->vu.i->count;
}
