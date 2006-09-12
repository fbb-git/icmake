/*
                                B T O I . C
*/

#include "iccomp.h"

void btoi(e)
    ESTRUC_
        *e;
{
    if (!test_type(e, e_bool))              /* no batchpatching needed */
        return;

    patchup_true(e, 1);
    e->truelen = 0;

    gencode(e, op_push_1_jmp_end);          /* truelist target */

    patchup_false(e, 1);
    e->falselen = 0;

    gencode(e, op_push_0);                  /* falselist target */

    set_type(e, e_int | e_code);            /* set int code type */
}
