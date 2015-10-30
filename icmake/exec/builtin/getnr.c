#include "builtin.ih"

size_t getNr(char **ptr)                /* *ptr points at % of  %<nr>  */
{
    return strtol(*ptr + 1, ptr, 10);   /* return the position beyond <nr>  */
}

    
