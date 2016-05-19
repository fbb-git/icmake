#include "symtab.ih"

void st_deleteVars(VarTab *varTab)
{
    for (VarInfo *info = varTab->info; varTab->nVars--; ++info)
        free(info->name);

    varTab->nVars = 0;  /* 0 variables left at variable table *varTab */
}
