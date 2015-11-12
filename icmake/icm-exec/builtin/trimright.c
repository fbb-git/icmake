#include "builtin.ih"

void builtin_trimRight()
{
    reg = *stringTrimRight(top());
}
