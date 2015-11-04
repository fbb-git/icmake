#include "symtab.ih"

void symtabCleanup()
{
    if (gs_nestingLevel != 1)   /* only a global and local symtab expected */
        error("DESIGN ERROR: > 2 symbol tables remain at end of function");

    st_deleteLocal();

    symtabPop();                /* remove the local symtab  */
}
