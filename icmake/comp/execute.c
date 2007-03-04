/*
                            E X E C U T E . C
*/

#include "iccomp.h"

/*
        process: execute(mode, cmd, chead, ahead, ..., atail,     ctail)
        argnr:            1     2    3     4           count - 1, count
        argidx:         0     1    2     3      4    count - 2, count - 1
                                                  ...
                                                  count-3
        at least required: 6 arguments

*/
ESTRUC_ *execute(arr)
    ESTRUC_
        *arr;
{
    register size_t
        count;
    ESTRUC_
        tmp,
        *argp,                              /* pointer to args */
        e;

    count = arr->type;                      /* get argument count */

    if (count < 6)                          /* to few arguments */
    {
        semantic(illegal_argcount, "execute");
        return (arr);                       /* dummy  args return */
    }

    argp = codestruc(arr, 0);               /* point to first arg */
    e = *(argp + 2);                        /* cmd head info at e */

    callrss(&e, f_cmd_head);                /* code for cmd_head at e */

    callrss(argp + 3, f_arg_head);          /* code for arg_head */
    catcode(&e, argp + 3);                  /* code appended to e*/

    callrss(&argp[count - 2], f_arg_tail);  /* code for arg_tail */
    catcode(&e, &argp[count - 2]);          /* code appended to e*/

    callrss(&argp[count - 1], f_cmd_tail);  /* code for cmd_tail */
    catcode(&e, &argp[count - 1]);          /* code appended to e*/

                                            /* keep variable # of args */
    memmove(argp + 2, argp + 4, (count - 2) * sizeof(ESTRUC_));
    arr->type -= 4;                         /* remove 4 arguments */

    catcode(&e, specials(f_exec, arr));     /* catenate call-code */

    free(stringbuf);                        /* make sure empty string */
    stringbuf = xstrdup(nullstring);        /* is pushed */

    tmp = *stackframe(e_str | e_const);     /* empty string argument */

    etoc(&tmp);
    catcode(&e, &tmp);                      /* empty string on the stack */

    gencode(&e, op_call_rss, f_cmd_tail);   /* used with cmd_tail..cmd_head */
    gencode(&e, op_call_rss, f_arg_tail);
    gencode(&e, op_call_rss, f_arg_head);

    callrss(&e, f_cmd_head);

    *arr = e;
    return arr;
}
