#include "builtin.ih"

void formater(void *dest, size_t start)
{
    size_t lastIdx = atart + intValue(top());   /* get the last arg idx */
    char *begin = getarg(start, &newElement);   /* get the fmt string  */

    char *end = begin + strlen(begin);          /* end of the fmt string    */
    char *mid;                                  /* midway                   */

    while (begin != end)                        /* process the fmt string   */
    {
        size_t idx;                             /* idx of the requested arg */

        mid = findPercent(begin, end);          /* mid points to a %<nr>    */

                                                /* write the first part     */
        (*p_destWrite)(dest, begin, mid - begin);

        begin = getNr(&idx, mid);               /* get the nr of %<nr>      */

        if (errno == 0 && idx >= 1 && idx <= lastIdx)
            writeArg(dest, start + idx);        /* write argument st + idx  */
        else
            (*p_destWrite)(dest, mid, begin);   /* or write the %<nr> as is */
    }

}

