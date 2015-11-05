#include "symtab.ih"

size_t st_newVarIdx()   /* return the index of a (unitialized) var. record */
{
    VarTab *vt = gs_varTab();

    if (vt->nVars == vt->capacity)
        vt->info = xrealloc(vt->info, (vt->capacity += capacityInc) 
                                      * sizeof(VarInfo));

    return vt->nVars++;
}
