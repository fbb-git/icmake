
/* #define msg
*/
#include "symtab.ih"

int st_findVar(unsigned nesting)   /* find util_string() via gs_vars[nesting] */
{
                                /* variable table to use when looking for
                                    util_string() */
    gs_compareTable = st_varTab(nesting);

    VarIndices *indices = gs_vars.varIndices + nesting;  /* Select the correct
                                                            index vector */

                                                    /* find the var's index */
    size_t nmemb = indices->nVars;
    void *unsignedPtr = lfind(util_string(), indices->index, &nmemb,
                            sizeof(unsigned), st_compareVars);

    return unsignedPtr == NULL ? -1 : *(int *)unsignedPtr;
}
