#include "symtab.ih"

void symtab_cleanup()
{
    symtab_pop();                /* remove the local symtab  */

    if (
        gs_vars.nLevels != 1    /* only the global symtab should be left */
        &&
        util_nErrors() == 0     /* and there were no errors */
    )
        rss_error("DESIGN ERROR: > 1 symbol table remains at end of function");

                                /* remove all local variables */
    st_deleteVars(gs_vars.varTab + 1);

}
