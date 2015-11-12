#include "var.ih"

uint16_t varDecCount(VAR_ *var)
{
    return --var->vu.i->count;
}
