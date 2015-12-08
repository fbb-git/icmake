#include "symtab.ih"

unsigned st_nestingOffset()
{
    return gs_vars.nLevels - 1;
}
