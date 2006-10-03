#include "var.ih"

UNS16 varDecCount(VAR_ *var)
{
    return --var->vu.i->count;
}
