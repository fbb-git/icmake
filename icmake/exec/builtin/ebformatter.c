#define msgx
#include "builtin.ih"

unsigned eb_formatter(void *dest, FormatDest startIdx)    /* idx of 1st arg */
{
    unsigned endIdx = 1 + int_value(stack_top());    /* the idx beyond the
                                                      idx of the last arg */
    msg("last idx = %u", endIdx);

    int notUsed;
    char *fmt = eb_getArg(startIdx, &notUsed);      /* get the fmt string  */

    char *end = eb_findPercent(fmt);                /* 'end' at 0 or %<nr> */

    unsigned ret;

    if (*end == 0)                              /* no % in the first str    */
    {
        ret = eb_noFormatting(dest, startIdx, endIdx);
        msg("processed from idx %u to idx %u", startIdx, endIdx);
        free(fmt);
        return ret;
    }

    ret = 1;
    char *begin = fmt;

    msg("Got a format string: `%s' startIdx = %u, endIdx = %u", fmt, startIdx,\
            endIdx);

    errno = 0;                                  /* make sure we're not      
                                                   bothered by a previous
                                                   errno */

    while (1)                                   /* process the fmt string   */
    {
        (*gb_pDestWrite)(dest, begin, end);     /* write begin .. end       */

        if (*end == 0)                          /* at end of string         */
            break;                              /* then done                */

        begin = end;                            /* begin -> %<nr>           */
                                                /* end -> %<nr>             */

        unsigned idx = eb_getNr(&end);            /* idx: the idx of %<nr>    */

        if (errno == 0 && idx > 0 && idx < endIdx) /* if idx OK             */
        {
            ++ret;
            eb_writeArgument(dest, startIdx + idx); /* write arg. st + idx  */
        }
        else
            (*gb_pDestWrite)(dest, begin, end); /* or write the %<nr> as-is */

        begin = end;                            /* ready for the next part  */

        end = eb_findPercent(begin);            /* 'end' at 0 or %<nr>      */
    }

    free(fmt);
    return ret;
}





