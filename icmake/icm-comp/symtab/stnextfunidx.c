#include "symtab.ih"

size_t st_nextFunIdx()          /* idx of an uninitialized record of a */
{                               /* function */
    if (gs_functions.nFunctions == gs_functions.capacity)
        gs_functions.info = rss_realloc(gs_functions.info, 
                                        (gs_functions.capacity += capacityInc)
                                        * sizeof(FunInfo));
    return gs_functions.nFunctions++;
}
