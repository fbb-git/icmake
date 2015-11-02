#include "symtab.ih"

int symtabFunIdx()       /* g_lexstring holds the name of an existing    */
{                        /* function, returns -1 if not                  */
    
    return st_find(gs_functions);
}
