#include "symtab.ih"

void symtab_pop()
{
    fprintf(stderr, "symtab_pop: return to level = %u\n", gs_vars.nLevels - 1);

    free(gs_vars.varIndices[--gs_vars.nLevels].index);
}
