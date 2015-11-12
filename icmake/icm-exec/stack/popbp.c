#include "stack.ih"


void popBP()
{
    while (sp - 1 != bp)
        pop();

    bp = intValue(top());            /* restore old bp   */
    pop();
}
