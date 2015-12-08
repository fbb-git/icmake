#include "parser.ih"

SemVal *p_for(SemVal *init, SemVal *cond, SemVal *inc, SemVal *stmnt)
{
    unsigned codelen = stmnt->codelen;

    p_patchupContinue(stmnt, codelen);

    p_catStmnts(stmnt, inc);                  /* catenate inc to stmt */


    p_while(cond, stmnt, 0);            /* create while-stmnt */

    symtab_pop();

    return p_catCode(init, cond);             /* return final code */
}
