#include "builtin.ih"

char *findPercent(char *cp, char *end)
{
    while (cp != end)                       /* search the string        */
    {
        size_t idx = strcspn(cp, "\\%");    /* find idx of 1st \ or %   */

        if (cp[idx] == '\\')                /* skip the next char and   */
        {                                   /* continue if \            */
            cp += idx + 2;
            continue;
        }
        
        if (isdigit(cp[1]))                 /* at a % check for %<nr>   */
            break;
    }
    return cp;
}
