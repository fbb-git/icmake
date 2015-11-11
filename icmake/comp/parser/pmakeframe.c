#include "parser.ih"

    /*  
        p_makeFrame writes the op_frame instruction, defining the number and
        types of all local variables, to gp_bin. 
        p_makeFrame is called by p_endFunction, which writes the statements of the
        functions to gp_bin after calling p_makeFrame.
    */
        
void p_makeFrame()
{
    if (symtab_setFunctionInfo(ftell(gp_bin)))
    {
        SemVal e = *p_stackFrame(0);         /* initialize empty frame */

        p_generateCode(&e, op_frame);              /* generate frame instruction */

        util_out(gp_bin, e.code, e.codelen); /* write to gp_bin */
        free(e.code);
    }
}
