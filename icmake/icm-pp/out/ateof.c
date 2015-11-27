#include "out.ih"

void (*out_atEOF(void))(void)
{
    return o_eof;
}
