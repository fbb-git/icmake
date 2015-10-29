#include "builtin.ih"

char *findPercent(char *ptr)
{
    while (1)                               /* search the string        */
    {
        ptr += strcspn(ptr, "\\%");         /* ptr -> \, % or \0        */

        switch (*ptr)
        {
            case 0:                         /* at end of string         */
            return ptr;

            case '\\':                      /* at a backslash           */
                if (*++ptr)                 /* skip the next char       */
                    ++ptr;
            break;

            default:                        /* at %                     */
                if (isdigit(ptr[1]))        /* if at %<nr>              */
                    return ptr;             /* return ptr -> %          */
                ++ptr;                      /* or skip % and continue   */
            break;
        }
    }
}
