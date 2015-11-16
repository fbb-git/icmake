#include "builtin.ih"

void builtin_getPid()
{
    gb_reg.type = e_int;
    gb_reg.vu.intval = (int16_t)getpid();
}
