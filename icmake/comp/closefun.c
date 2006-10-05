/*
                        C L O S E F U N . C
*/

#include "iccomp.h"

static INT8
    opret = op_ret;

void close_fun(e)
    ESTRUC_
        *e;
{
    entertab = &global;

    last_stmnt(e);

    if (!dead[dead_sp])
        outbin(&opret, sizeof(INT8));
    else
        dead[dead_sp] = 0;  /* leaving a function: code generation ok,  */
                            /* e.g. to define global variables          */
}
