#include "symtab.ih"

void st_deleteVars(VarTab *varTab)
{
    for (VarInfo *info = varTab->info; varTab->nVars--; ++info)
        free(info->name);
}
