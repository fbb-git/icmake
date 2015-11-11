#include "parser.ih"

SemVal *insertarg(SemVal *insert, SemVal *mult)
{
    register size_t count;

    count = ++mult->type;                   /* get/increase # of args */
                                            /* room for extra SemVal */
    mult->code = rss_realloc(mult->code, count * sizeof(SemVal));

    memmove(                                /* shift up for new firstarg */
         codestruc(mult, 1),
         codestruc(mult, 0),
         (count - 1) * sizeof(SemVal));

    eToStack(insert);                           /* argument is code now */
    *codestruc(mult, 0) = *insert;          /* insert expression in array */
    return mult;                            /* done */
}
