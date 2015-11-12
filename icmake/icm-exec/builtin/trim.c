#include "builtin.ih"

void builtin_trim()
{
    reg = *stringTrimLeft(stringTrimRight(top()));
}
