#include "builtin.ih"

void fun_trim()
{
    reg = *stringTrimLeft(stringTrimRight(top()));
}
