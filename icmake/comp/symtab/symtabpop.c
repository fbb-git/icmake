#include "symtab.ih"

void symtab_pop()
{
    free(gs_vars.varIndices + --gs_vars.nLevels);
}
