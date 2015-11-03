#include "parser.ih"

SemVal *multargs(SemVal *left, SemVal *right)
{
    register size_t count;

    count = ++left->type;                   /* get/increase # of args */
                                            /* room for extra SemVal */
    left->code = xrealloc(left->code, count * sizeof(SemVal));
    etoc(right);                            /* argument is code now */
                                            /* right expression in array */

    *codestruc(left, count - 1) = *right;

    return (left);                          /* done */
}
