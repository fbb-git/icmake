/*
                           B R E A K S T M . C
*/

#include "parser.ih"

static SemVal e;

SemVal *break_stmnt()
{
    e = *stackframe(0);

    if (!gp_breakOK)
        semantic("'break' only in 'while' or 'for' statements");
    else
    {
        gencode(&e, op_jmp, j_truelist);
        e.type = e_bool | e_code;
        ++g_dead[g_dead_sp];                    /* next code is g_dead */
    }
    return &e;
}
