/*
    Hidden functions are called by their negative function offset
    to be patched up at code-generation time
*/

#include "parser.ih"

void callhidden(register int fun, ESTRUC_ *rarg)
{
    g_hidden_called = 1;              /* hidden function calls */

    g_hiddenFun[fun].this = 1;        /* this hidden function is called */

    gencode(rarg, op_call, -fun);     /* dummy, to be address of hidden */

    gencode(rarg, op_asp, g_hiddenFun[fun].nargs); /* clear pushed arguments */

    set_type(rarg, g_hiddenFun[fun].type);       /* set the returntype */
}
