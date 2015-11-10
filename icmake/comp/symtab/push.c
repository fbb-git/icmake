#define msg
/*
*/

#include "symtab.ih"

void symtab_push()
{
    msg("next symtab offset: %u", gs_vars.nLevels);

    if (gs_vars.nLevels == gs_vars.capacity)
        gs_vars.varIndices = rss_realloc(gs_vars.varIndices, 
                            (gs_vars.capacity += capacityInc) 
                            * sizeof(VarIndices));

    memset(gs_vars.varIndices + gs_vars.nLevels++, 0, sizeof(VarIndices));
}
