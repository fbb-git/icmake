#include "symtab.ih"

size_t *st_newIdxPtr()        /* pointer to the next available index[] */
{                               /* element at the current nestinglevel  */
    VarIndices *indices = st_topLevel();
    
    if (indices->nVars == indices->capacity)
       indices->index = rss_realloc(indices->index, 
                                    (indices->capacity += capacityInc) *
                                        sizeof(size_t));

    return indices->index + indices->nVars++;
}
