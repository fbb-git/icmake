#include "symtab.ih"

int symtab_findFun()      /* util_string() holds the name of an existing    */
{                        /* function, returns -1 if not                  */

    void *ret = lfind(util_string(), gs_functions.info, 
                        &gs_functions.nFunctions, sizeof(FunInfo), 
                        st_findFun);

    return ret == NULL ? -1 : (FunInfo *)ret - gs_functions.info;
}
