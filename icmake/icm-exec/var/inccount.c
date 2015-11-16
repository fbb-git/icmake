#include "var.ih"

void varIncCount(Variable *var)
{
    ++var->vu.i->count;
}
