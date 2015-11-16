#include "parser.ih"

SemVal *p_specials(ExprType type, SemVal *marg)  /* array of arguments */
{
    register size_t count;

    if ((FunNr)type == f_execute)
        return(p_execute(marg));              /* full list of arguments */

    count = marg->type;                     /* count # of arguments */

    p_catArgs(marg);                          /* catenate multiple args */
    p_generateCode(marg, op_push_imm, count);      /* # of arguments of fun */
    p_callRss(marg, type, count + 1);         /* call function */

    return (marg);
}
