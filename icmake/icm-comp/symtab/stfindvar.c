
/* #define msg
*/
#include "symtab.ih"

int st_findVar(size_t nesting)   /* find util_string() via gs_vars[nesting] */
{
                                /* variable table to use when looking for
                                    util_string() */
    gs_compareTable = st_varTab(nesting);

    VarIndices *indices = gs_vars.varIndices + nesting;  /* Select the correct
                                                            index vector */

                                                    /* find the var's index */
    void *size_tPtr = lfind(util_string(), indices->index, &indices->nVars,
                            sizeof(size_t), st_compareVars);

    return size_tPtr == NULL ? -1 : *(int *)size_tPtr;
}
