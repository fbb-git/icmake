#include "var.ih"

void var_incCount(Variable *var)
{
    ++var->vu.i->count;
}
