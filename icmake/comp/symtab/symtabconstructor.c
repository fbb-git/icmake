#include "symtab.ih"

void symtabConstructor()
{
    /* counters were initialized compile-time */

    st_init(&gs_functions,  1);    
    st_init(&gs_variables,  gs_vartabCap);    

    gs_nLocals = xrealloc(0, gs_depthCap * sizeof(size_t));
    gs_nLocals[0] = 0;
}

