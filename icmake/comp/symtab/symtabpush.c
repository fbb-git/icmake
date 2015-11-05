#include "symtab.ih"

void symtab_push()
{
    if (gs_vars.nLevels == gs_vars.capacity)
        gs_vars.indices = xrealloc(gs_vars.indices, 
                            (gs_vars.capacity += capacityInc) 
                            * sizeof(VarIndices));

    memset(gs_vars.indices + gs_vars.nLevels++, 0, sizeof(VarIndices));
}
