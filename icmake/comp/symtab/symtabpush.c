#include "symtab.ih"

void symtab_push()
{
    fprintf(stderr, "symtab_push next level is %u\n", gs_vars.nLevels + 1);

    if (gs_vars.nLevels == gs_vars.capacity)
        gs_vars.varIndices = xrealloc(gs_vars.varIndices, 
                            (gs_vars.capacity += capacityInc) 
                            * sizeof(VarIndices));

    memset(gs_vars.varIndices + gs_vars.nLevels++, 0, sizeof(VarIndices));
}
