#include "parser.ih"

SemVal *p_insertArg(SemVal *insert, SemVal *mult)
{
    register unsigned count;

    count = ++mult->type;                   /* get/increase # of args */
                                            /* room for extra SemVal */
    mult->code = rss_realloc(mult->code, count * sizeof(SemVal));

    memmove(                                /* shift up for new p_firstArg */
         codestruc(mult, 1),
         codestruc(mult, 0),
         (count - 1) * sizeof(SemVal));

    p_expr2stack(insert);                           /* argument is code now */
    *codestruc(mult, 0) = *insert;          /* insert expression in array */
    return mult;                            /* done */
}
