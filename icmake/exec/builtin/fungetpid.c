#include "builtin.ih"

void fun_getpid()
{
    reg.type = e_int;
    reg.vu.intval = (int16_t)getpid();
}
