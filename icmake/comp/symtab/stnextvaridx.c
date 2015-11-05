#include "symtab.ih"

size_t st_nextVarIdx(VarInfo **vi)  /* idx of an uninitialized record of a */
{                                   /* variable */
    size_t idx = st_newVarIdx();
   
    *vi = st_varTab()->info + idx;

    *st_newIdxPtr() = idx;

    return ptr + ptr->nSymbols++;
}
