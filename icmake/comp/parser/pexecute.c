#include "parser.ih"

/*
        process: execute(mode, cmd, chead, ahead, ..., atail,     ctail)
        argnr:            1     2    3     4           count - 1, count
        argidx:         0     1    2     3      4    count - 2, count - 1
                                                  ...
                                                  count-3
        at least required: 6 arguments

*/

SemVal *p_execute(SemVal *arr)
{
    register size_t count;
    SemVal
        tmp,
        *argp,                              /* pointer to args */
        e;

    count = arr->type;                      /* get argument count */

    if (count < 6)                          /* to few arguments */
    {
        util_semantic(gp_illegalArgCount, "execute");
        return (arr);                       /* dummy  args return */
    }

    argp = codestruc(arr, 0);               /* point to first arg */
    e = *(argp + 2);                        /* cmd head info at e */

    p_callRss(&e, f_cmd_head);                /* code for cmd_head at e */

    p_callRss(argp + 3, f_arg_head);          /* code for arg_head */
    p_catCode(&e, argp + 3);                  /* code appended to e*/

    p_callRss(&argp[count - 2], f_arg_tail);  /* code for arg_tail */
    p_catCode(&e, &argp[count - 2]);          /* code appended to e*/

    p_callRss(&argp[count - 1], f_cmd_tail);  /* code for cmd_tail */
    p_catCode(&e, &argp[count - 1]);          /* code appended to e*/

                                            /* keep variable # of args */
    memmove(argp + 2, argp + 4, (count - 2) * sizeof(SemVal));
    arr->type -= 4;                         /* remove 4 arguments */

    p_catCode(&e, p_specials(f_exec, arr));     /* catenate call-code */

    free(gp_stringbuf);                        /* make sure empty string */
    gp_stringbuf = rss_strdup("");              /* is pushed */

    tmp = *p_stackFrame(e_str | e_const);     /* empty string argument */

    p_expr2stack(&tmp);
    p_catCode(&e, &tmp);                      /* empty string on the stack */

    p_generateCode(&e, op_call_rss, f_cmd_tail);   /* used with cmd_tail..cmd_head */
    p_generateCode(&e, op_call_rss, f_arg_tail);
    p_generateCode(&e, op_call_rss, f_arg_head);

    p_callRss(&e, f_cmd_head);

    *arr = e;
    return arr;
}
