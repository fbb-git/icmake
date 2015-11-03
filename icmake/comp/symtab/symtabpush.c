#include "symtab.ih"

void symtabPush()
{
    if (gs_nVartab == gs_vartabCap) /* all used: allocate some more */
    {
        xrealloc(gs_variables,  (gs_vartabCap += 4) * sizeof(Symtab));
        xrealloc(gs_nLocals,    (gs_vartabCap += 4) * sizeof(size_t));
    }

    st_symtabInit(gs_top = (gs_variables + gs_nVartab++));
}
