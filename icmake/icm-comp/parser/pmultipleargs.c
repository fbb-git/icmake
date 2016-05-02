#include "parser.ih"

SemVal *p_multipleArgs(SemVal *left, SemVal *right)
{
    register unsigned count;

    count = ++left->type;                   // get/increase # of args 
                                            // room for extra SemVal
    left->code = rss_realloc(left->code, count * sizeof(SemVal));
    p_expr2stack(right);                    // argument is code now
                                            // right expression in array 

    *codestruc(left, count - 1) = *right;

    return left;                            /* done */
}
