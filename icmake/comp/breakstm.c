/*
                           B R E A K S T M . C
*/

#include "iccomp.h"

static ESTRUC_ e;

ESTRUC_ *break_stmnt()
{
    e = *stackframe(0);

    if (!break_ok)
        semantic("'break' only in 'while' or 'for' statements");
    else
    {
        gencode(&e, op_jmp, j_truelist);
        e.type = e_bool | e_code;
        ++dead[dead_sp];                    /* next code is dead */
    }
    return (&e);
}
