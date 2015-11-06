#include "parser.ih"

static SemVal e;

SemVal *continue_stmnt()
{
    e = *stackframe(0);

    if (!gp_breakOK)
        util_semantic("'continue' only in 'while' or 'for' statements");
    else
    {
        gencode(&e, op_jmp, j_continuelist);/* jump to the continue dest  */

        e.type = e_bool | e_code;
        ++gp_dead[gp_dead_sp];                    /* next code is gp_dead */
    }
    return &e;
}
