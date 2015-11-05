#include "symtab.ih"

VarTab *st_varTab()
{
    return gs_var.varTab + st_nestingLevel() > 0;
}
