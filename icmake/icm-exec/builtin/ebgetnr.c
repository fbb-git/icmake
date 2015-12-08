#include "builtin.ih"

unsigned eb_getNr(char **ptr)                /* *ptr points at % of  %<nr>  */
{
    return strtol(*ptr + 1, ptr, 10);   /* return the position beyond <nr>  */
}

    
