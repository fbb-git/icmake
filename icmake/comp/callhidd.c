/*
                            C A L L H I D D E N . C

    Hidden functions are called by their negative function offset
    to be patched up at code-generation time
*/

#include "iccomp.h"

void callhidden(register int fun, ESTRUC_ *rarg)
{
    hidden_called = 1;                      /* hidden function calls */

    hidden[fun].this = 1;                   /* this hidden function is called */

    gencode(rarg, op_call, -fun);           /* dummy, to be address of hidden */

    gencode(rarg, op_asp, hidden[fun].nargs);   /* clear pushed arguments */

    set_type(rarg, hidden[fun].type);       /* set the returntype */
}
