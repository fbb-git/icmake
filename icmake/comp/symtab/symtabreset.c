#include "symtab.ih"

void symtabReset()      /* reset local symtabs at the begin of a function */
{
                        /* free all local symbol tables (beyond global */
    for (size_t idx = 1; idx != gs_nVartab; ++idx)
        st_free(gs_variables + idx);

                        /* reset the local vars counts */
    memset(gs_nLocals, 0, gs_nVartab * sizeof(size_t));

    gs_nVartab = 1;     /* now only the global symtab remains */

    symtabPush();       /* initialize the 1st local symbol table */
}
