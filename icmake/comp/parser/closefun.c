/*
                        C L O S E F U N . C
*/

#include "parser.ih"

static INT8 opret = op_ret;

void close_fun(ESTRUC_ *e)
{
    g_entertab = &g_globaltab;

    last_stmnt(e);

    if (!g_dead[g_dead_sp])
        outbin(&opret, sizeof(INT8));
    else
        g_dead[g_dead_sp] = 0;  /* leaving a function: code generation ok,  */
                            /* e.g. to define global variables          */
}
