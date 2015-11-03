#include "parser.ih"

SemVal *for_stmnt(SemVal *init, SemVal *cond, SemVal *inc, SemVal *stmnt)
{
    size_t codelen = stmnt->codelen;

    patchup_continue(stmnt, codelen);

    cat_stmnt(stmnt, inc);                  /* catenate inc to stmt */


    while_stmnt(cond, stmnt, 0);            /* create while-stmnt */

    return catcode(init, cond);             /* return final code */
}
