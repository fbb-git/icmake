#include "state.ih"

void st_available()
{
    if (st_size == st_capacity)
        st_stack = rss_realloc(st_stack, (st_capacity += 10) * sizeof(State));
}
