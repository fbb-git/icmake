#include "builtin.ih"

void fun_trimright()
{
    reg = *stringTrimRight(top());
}
