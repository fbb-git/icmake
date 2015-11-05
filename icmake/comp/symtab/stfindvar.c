#include "symtab.ih"

int st_findVar(size_t depth)   /* find g_lexstring in gs_vars[depth] */
{
                                /* variable table to use when looking for
                                    g_lexstring */
    gs_compareTable = gs_vars.varTab + depth > 0;

    VarIndices indices = gs_vars.indices + depth;   /* Select the correct
                                                        index vector */

                                                    /* find the var's index */
    void *size_tPtr = lfind(g_lexstring, indices->index, &indices->nVars,
                            sizeof(size_t), st_compareVars);

    return size_tPtr == NULL ? -1 : *(int)size_tPtr;
}
