#include "parser.ih"

SemVal *specials(ExprType type, SemVal *marg)  /* array of arguments */
{
    register size_t count;

    if ((FUNNR_)type == f_execute)
        return(execute(marg));              /* full list of arguments */

    count = marg->type;                     /* count # of arguments */

    catargs(marg);                          /* catenate multiple args */
    gencode(marg, op_push_imm, count);      /* # of arguments of fun */
    callrss(marg, type, count + 1);         /* call function */

    return (marg);
}
