#define msgx
#include "state.ih"

void state_pop(unsigned linenr)
{
    msg("%s %u size = %u, before pop", \
        filestack_tos()->filename, linenr, st_size);

    --st_size;

    if (st_size == 0)
        rss_fatal(filestack_tos()->filename, linenr,
            "#endif without a matching #if(n)def encountered");

}
