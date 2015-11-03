#include "parser.ih"

void make_frame()
{
    size_t nLocalVars = symtabSetLastFunction(gp_nParams);

    if (nLocalVars)
    {
        SemVal e = *stackframe(0);         /* initialize empty frame */
        gencode(&e, op_frame);              /* generate frame instruction */
        outbin(e.code, e.codelen);          /* write to g_bin */
        free(e.code);
    }
}
