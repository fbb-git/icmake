#include "icmun.h"

char *varname (type)
E_TYPE_ type;
{
    if (type & e_str)
        return ("string");
    if (type & e_int)
        return ("int");
    return ("list");
}
