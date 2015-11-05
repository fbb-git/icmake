#include "symtab.ih"

VarIndices *st_topLevel()
{
    return gs_vars.indices + gs_vars.nLevels - 1;
}
