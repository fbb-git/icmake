#include "builtin.ih"

size_t eb_getNr(char **ptr)                /* *ptr points at % of  %<nr>  */
{
    return strtol(*ptr + 1, ptr, 10);   /* return the position beyond <nr>  */
}

    
