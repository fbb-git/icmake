#include "parser.ih"

void catargs(ESTRUC_ *arr)
{
    register size_t count;
    ESTRUC_ *ep;
    ESTRUC_ e;

    if (!(count = arr->type))
        return;                             /* no arguments */

    ep = (ESTRUC_ *)arr->code;              /* local pointer to ESTRUC_s */

    e = ep[--count];                        /* e: code of last argument */

    while (count--)
        catcode(&e, &ep[count]);            /* catenate next argument(s) */

    free(arr->code);                         /* memory of array is free again */
    *arr = e;                               /* arguments changed to code */
}
