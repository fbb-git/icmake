/*#define msg
*/

#include "symtab.ih"

void symtab_pop()
{
    free(gs_vars.varIndices[--gs_vars.nLevels].index);

    msg("returning to symtab offset: %u", gs_vars.nLevels);
}
