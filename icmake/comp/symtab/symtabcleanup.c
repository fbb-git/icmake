#include "symtab.ih"

void symtabCleanup()
{
    if (gs_nVartab != 2)        /* only a global and local symtab expected */
        error("DESIGN ERROR: > 2 symbol tables remain at end of function");

    symtabPop();                /* remove the local symtab  */
}
