#include "builtin.ih"

void b_getPid()
{
    gb_reg.type = e_int;
    gb_reg.intValue = (int16_t)getpid();
}
