#include "var.ih"

void varIncCount(VAR_ *var)
{
    ++var->vu.i->count;
}
