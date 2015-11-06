#include "symtab.ih"

size_t st_nestingLevel()
{
    return gs_vars.nLevels;
}
