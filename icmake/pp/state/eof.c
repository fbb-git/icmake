#include "state.ih"

static char plural[2];

void state_eof()
{
    if (st_size != 1)
    {
        if (st_size != 2)
            plural[0] = 's';

        rss_fatal(0, 0, 
                "at EOF: #endif%s missing for %u #if(n)def%s",
                    plural, st_size - 1, plural);
    }
}











