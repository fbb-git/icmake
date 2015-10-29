#include "builtin.ih"

void fun_ffprintf (FILE *out, size_t start)
{
    int newElement;

    size_t lastIdx = atart + intValue(top());   /* get the last arg idx */
    char *begin = getarg(start, &newElement);   /* get the fmt string  */

    char *end = begin + strlen(begin);          /* end of the fmt string    */
    char *mid;                                  /* midway                   */

    while (begin != end)                        /* process the fmt string   */
    {
        size_t idx;                             /* idx of the requested arg */

        mid = findPercent(begin, end);          /* mid points to a %<nr>    */
        fwrite(out, begin, mid - begin);        /* write the 1st part       */
        begin = getNr(&idx, mid);               /* get the nr of %<nr>      */

        if (errno == 0 && idx >= 1 && idx <= lastIdx)
            writeArg(out, start + idx);         /* write argument st + idx  */
        else
            fputs("(null)", out);
    }
        
}

