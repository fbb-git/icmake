#include "parser.ih"

    /*  
        make_frame writes the op_frame instruction, defining the number and
        types of all local variables, to gp_bin. 
        make_frame is called by close_fun, which writes the statements of the
        functions to gp_bin after calling make_frame.
    */
        
void make_frame()
{
//FBB    if (symtab_setLastFunction())
    {
        SemVal e = *stackframe(0);         /* initialize empty frame */
        gencode(&e, op_frame);              /* generate frame instruction */
        util_out(gp_bin, e.code, e.codelen); /* write to gp_bin */
        free(e.code);
    }
}
