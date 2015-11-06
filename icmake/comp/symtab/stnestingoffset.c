#include "symtab.ih"

size_t st_nestingOffset()
{
    return gs_vars.nLevels - 1;
}
