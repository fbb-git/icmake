

/* #define msg
*/

#include "parser.ih"

static int8_t opret = op_ret;

void p_endFunction(SemVal *funStmnt)
{
    msg("START");

    gp_nestLevel = 0;       /* function completed: writing code to gp_bin 
                                now OK */

    p_makeFrame();           /* make the frame, defining the local variables */
                            /* and define the function's first address      */

    p_lastStmnt(funStmnt);   /* add the function's statements, patching 
                               funStmnnt's false list */

    if (!gp_dead[gp_dead_sp])
        util_out(gp_bin, &opret, sizeof(int8_t)); /* add a 'ret' instruction */
    else
        gp_dead[gp_dead_sp] = 0;  /* leaving a function: code generation ok,  */
                                /* e.g. to define global variables          */

    symtab_cleanup();        /* pop all but the global symtab, update the local
                                variable offsets */

    msg("END");
}







