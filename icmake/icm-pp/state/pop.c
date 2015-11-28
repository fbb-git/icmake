#include "state.ih"

void state_pop(size_t linenr)
{
    --st_size;
    if (st_size == 0)
        rss_fatal(filestack_tos()->filename, linenr,
            "#endif without a matching #if(n)def encountered");

}
