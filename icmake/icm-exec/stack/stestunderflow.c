#include "stack.ih"

void s_testUnderflow()
{
    if (gs_sp == 0)
        rss_fatal(0, 0, "stack underflow at %s", aux_offset());
}
