#include "stack.ih"

void s_testUnderflow()
{
    if (gs_sp == 0)
        rss_error("stack underflow at %s", aux_offset());
}
