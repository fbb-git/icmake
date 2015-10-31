#include "iccomp.h"

static ESTRUC_ e;

ESTRUC_ *continue_stmnt()
{
    e = *stackframe(0);

    if (!break_ok)
        semantic("'continue' only in 'while' or 'for' statements");
    else
    {
        gencode(&e, op_jmp, j_continuelist);/* jump to the continue dest  */

        e.type = e_bool | e_code;
        ++dead[dead_sp];                    /* next code is dead */
    }
    return &e;
}
