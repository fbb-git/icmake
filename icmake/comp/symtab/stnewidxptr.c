#include "symtab.ih"

size_t *st_stNewIdxPtr()        /* pointer to the next available index[] */
{                               /* element at the current nestinglevel  */
    VarIndices *indices = topLevel();
    
    if (indices->nVars == indices->capacity)
       indices->index = xrealloc(indices->index, 
                                    (indices->capacity += capacityInc) *
                                        sizeof(size_t));

    return indices->index + indices=>nVars++;
}
