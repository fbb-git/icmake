#include "builtin.ih"

void formater(void *dest, size_t start)
{
    int stop;
    size_t lastIdx = start + intValue(top());   /* get the last arg idx */
    char *begin = getarg(start, &stop);         /* get the fmt string  */

    char *end = begin + strlen(begin);          /* end of the fmt string    */
    char *mid;                                  /* midway                   */

fprintf(stderr, "formater: %s\n", begin);
return;

    while (begin != end)                        /* process the fmt string   */
    {
        size_t idx;                             /* idx of the requested arg */

        mid = findPercent(begin, end);          /* mid points to a %<nr>    */

        (*p_destWrite)(dest, begin, mid);       /* write the first part     */

        begin = getNr(&idx, mid);               /* get the nr of %<nr>      */

        if (errno == 0 && idx >= 1 && idx <= lastIdx)
            writeArg(dest, start + idx);        /* write argument st + idx  */
        else
            (*p_destWrite)(dest, mid, begin);   /* or write the %<nr> as is */
    }

}

