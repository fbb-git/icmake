#include "parser.ih"

static INT8 opret = op_ret;

void close_fun(SemVal *funStmnt)
{
    last_stmnt(funStmnt);   /* patch funStmnnt's false list */

    make_frame();           /* make the frame, defining the local variables */

    if (!gp_dead[gp_dead_sp])
        util_out(gp_bin, &opret, sizeof(INT8));   /* add a 'ret' instruction */
    else
        gp_dead[gp_dead_sp] = 0;  /* leaving a function: code generation ok,  */
                                /* e.g. to define global variables          */

    symtab_cleanup();        /* pop all but the global symtab, update the local
                                variable offsets */
}
