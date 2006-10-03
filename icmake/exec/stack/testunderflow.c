#include "stack.ih"

void stacktestunderflow()
{
    if (sp == 0)
        error("stack underflow at %s", hexstring(curoffs, 4));
}
