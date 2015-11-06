#include "symtab.ih"

VarIndices *st_topLevel()
{
    return gs_vars.varIndices + gs_vars.nLevels - 1;
}
