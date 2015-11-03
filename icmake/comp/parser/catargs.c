#include "parser.ih"

void catargs(SemVal *arr)
{
    register size_t count;
    SemVal *ep;
    SemVal e;

    if (!(count = arr->type))
        return;                             /* no arguments */

    ep = (SemVal *)arr->code;              /* local pointer to SemVals */

    e = ep[--count];                        /* e: code of last argument */

    while (count--)
        catcode(&e, &ep[count]);            /* catenate next argument(s) */

    free(arr->code);                         /* memory of array is free again */
    *arr = e;                               /* arguments changed to code */
}
