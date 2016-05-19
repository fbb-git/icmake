#include "symtab.ih"

VarTab *st_varTab(unsigned nesting)
{
    return gs_vars.varTab + (nesting > 0);
}
