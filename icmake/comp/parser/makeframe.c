#include "parser.ih"

    /*  
        make_frame writes the op_frame instruction, defining the number and
        types of all local variables, to g_bin. 
        make_frame is called by close_fun, which writes the statements of the
        functions to g_bin after calling make_frame.
    */
        
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
