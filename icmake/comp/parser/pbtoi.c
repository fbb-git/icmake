#include "parser.ih"

void p_bool2int(SemVal *e)
{
    if (!test_type(e, e_bool))              /* no batchpatching needed */
        return;

    p_patchupTrue(e, 1);
    e->truelen = 0;

    p_generateCode(e, op_push_1_jmp_end);          /* truelist target */

    p_patchupFalse(e, 1);
    e->falselen = 0;

    p_generateCode(e, op_push_0);                  /* falselist target */

    set_type(e, e_int | e_stack);            /* set int code type */
}
