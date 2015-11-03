#include "parser.ih"

static INT8 opret = op_ret;

void close_fun(SemVal *e)
{
    symtabCleanup();        /* pop all but the global symtab, update the local
                                variable offsets */

    patchVariables();       /* patch the variable references */

    last_stmnt(e);

    if (!g_dead[g_dead_sp])
        outbin(&opret, sizeof(INT8));
    else
        g_dead[g_dead_sp] = 0;  /* leaving a function: code generation ok,  */
                                /* e.g. to define global variables          */
}
