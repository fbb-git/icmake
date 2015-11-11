/*
                           B R E A K S T M . C
*/

#include "parser.ih"

static SemVal e;

SemVal *p_break()
{
    e = *p_stackFrame(0);

    if (!gp_breakOK)
        util_semantic("'break' only in 'while' or 'for' statements");
    else
    {
        p_generateCode(&e, op_jmp, j_truelist);
        e.type = e_bool | e_stack;
        ++gp_dead[gp_dead_sp];                    /* next code is gp_dead */
    }
    return &e;
}
