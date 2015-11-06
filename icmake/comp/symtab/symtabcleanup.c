#include "symtab.ih"

void symtab_cleanup()
{
    symtab_pop();                /* remove the local symtab  */

    fprintf(stderr, "mid symtab_cleanup\n");

    if (gs_vars.nLevels != 1)   /* only the global symtab should be left */
        error("DESIGN ERROR: > 1 symbol table remains at end of function");

    st_deleteVars(gs_vars.varTab + 1);

}
