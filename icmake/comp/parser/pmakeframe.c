/*  
    p_makeFrame writes the op_frame instruction, defining the number and
    types of all local variables, to gp_bin. 
    p_makeFrame is called by p_endFunction, which writes the statements of the
    functions to gp_bin after calling p_makeFrame.
*/

/*#define msg
*/

#include "parser.ih"

void p_makeFrame()
{
    if (symtab_nLocals())
    {
        SemVal e = *p_stackFrame(0);         /* initialize empty frame */

        p_pushDead();
        gp_dead[gp_dead_sp] = 0;
        p_generateCode(&e, op_frame);        /* generate frame instruction */
        p_popDead();

        util_out(gp_bin, e.code, e.codelen); /* write to gp_bin */

        msg("write code frame of %u bytes", e.codelen);

        free(e.code);
    }
}
