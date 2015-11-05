#include "symtab.ih"

int symtab_findFun()      /* g_lexstring holds the name of an existing    */
{                        /* function, returns -1 if not                  */

    void *ret = lfind(g_lexstring, gs_functions.info, 
                        &gs_functions.nFunctions, sizeof(FunInfo), 
                        st_findFun);

    return ret == NULL ? -1 : (FunInfo *)ret - gs_functions.info;
}
