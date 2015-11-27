#include "state.ih"

void state_eof()
{
    if (st_size != 1)
        rss_error("[%s] %u #if(n)def(s) without matching #endif encountered",
                  filestack_tos()->filename,  st_size - 1);
}











