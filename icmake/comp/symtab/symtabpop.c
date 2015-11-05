#include "symtab.ih"

void symtab_pop()
{
    free(gs_vars.indices + --gs_vars.nLevels);
}
