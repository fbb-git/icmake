#include "builtin.ih"

void formatter(void *dest, size_t start)
{
    size_t lastIdx = start + intValue(top());   /* get the last arg idx */

    int notUsed;
    char *fmt = getarg(start, &notUsed);        /* get the fmt string  */

    char *end = findPercent(fmt);               /* 'end' at 0 or %<nr>      */

    if (*end == 0)                              /* no % in the first str    */
    {
        noFormatting(dest, start, lastIdx);
        free(fmt);
        return;
    }

    char *begin = fmt;

    while (1)                                   /* process the fmt string   */
    {
        size_t idx;                             /* idx of a requested arg   */

        (*p_destWrite)(dest, begin, end);       /* write begin .. end       */

        if (*end == 0)                          /* at end of string         */
            break;                              /* then done                */

        begin = end;                            /* begin -> %<nr>           */
        idx = getNr(&end);                      /* idx: the nr of %<nr>     */
                                                /* end -> %<nr>             */

        if (errno == 0 && idx > 0 && idx <= lastIdx)    /* if idx OK        */
            writeArgument(dest, start + idx);   /* write argument st + idx  */
        else
            (*p_destWrite)(dest, begin, end);   /* or write the %<nr> as-is */

        begin = end;                            /* ready for the next part  */

        end = findPercent(begin);               /* 'end' at 0 or %<nr>      */
    }

    free(fmt);
}





