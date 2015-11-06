#include "symtab.ih"

VarTab *st_varTab(size_t nesting)
{
    return gs_vars.varTab + (nesting > 0);
}
