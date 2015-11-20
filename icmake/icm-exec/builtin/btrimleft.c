#include "builtin.ih"

void b_trimLeft()
{
    string_trimLeft(eb_releaseReg(), stack_top());
}
