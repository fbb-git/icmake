#include "builtin.ih"

Variable *eb_releaseReg()
{
    destructor(&gb_reg);
    return &gb_reg;
}
