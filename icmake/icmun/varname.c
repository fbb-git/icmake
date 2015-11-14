#include "icmun.ih"

char *varname (type)
ExprType type;
{
    if (type & e_str)
        return ("string");
    if (type & e_int)
        return ("int");
    return ("list");
}
