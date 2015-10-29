#include "builtin.ih"

void fun_trimleft()
{
    reg = *stringTrimLeft(top());
}
