#define msgx
#include "out.ih"

void out_space()
{
    msg("");

    if (!o_atBOL)
        o_space = 1;
}
