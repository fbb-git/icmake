#include "stack.ih"

void stacktestunderflow()
{
    if (sp == 0)
        rss_error("stack underflow at %s", rss_hexString(curoffs, 4));
}
