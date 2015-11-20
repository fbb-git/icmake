#include "builtin.ih"

void b_trimRight()
{
    string_trimRight(eb_releaseReg(), stack_top());
}
