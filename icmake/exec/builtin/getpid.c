#include "builtin.ih"

void builtin_getPid()
{
    reg.type = e_int;
    reg.vu.intval = (int16_t)getpid();
}
