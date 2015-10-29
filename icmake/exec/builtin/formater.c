#include "builtin.ih"

void formater(void *dest, size_t start)
{
    int stop;
    size_t lastIdx = start + intValue(top());   /* get the last arg idx */
    char *begin = getarg(start, &stop);         /* get the fmt string  */

    while (1)                                   /* process the fmt string   */
    {
        size_t idx;                             /* idx of a requested arg   */

        char *end = findPercent(begin);         /* 'end' at 0 or %<nr>      */

        (*p_destWrite)(dest, begin, end);       /* write begin .. end       */

        if (*end == 0)                          /* at end of string         */
            return;                             /* then done                */

        begin = end;                            /* begin -> %               */
        end = getNr(&idx, end + 1);             /* idx: the nr of %<nr>     */
                                                /* end -> byond %<nr>       */

        if (errno == 0 && idx > 0 && idx <= lastIdx)    /* if idx OK        */
            writeArg(dest, start + idx);        /* write argument st + idx  */
        else
            (*p_destWrite)(dest, begin, end);   /* or write the %<nr> as-is */

        begin = end;                            /* ready for the next part  */
    }
}





