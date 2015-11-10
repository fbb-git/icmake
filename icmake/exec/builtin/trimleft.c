#include "builtin.ih"

void builtin_trimLeft()
{
    reg = *stringTrimLeft(top());
}
