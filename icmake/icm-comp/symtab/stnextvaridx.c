#include "symtab.ih"

unsigned st_nextVarIdx(VarInfo **vi)  /* idx of an uninitialized record of a */
{                                   /* variable */

    unsigned idx = st_newVarIdx();    /* new variable in local or global tab */
   
                                    /* RBA a pointer to the next VarInfo */
    *vi = st_varTab(st_nestingOffset())->info + idx;  

    *st_newIdxPtr() = idx;          /* create room in the nesting-level 
                                        index vector, assign the idx */

    return idx;                     /* return the index of the next var. */
}
