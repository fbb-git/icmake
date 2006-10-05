#include "stack.ih"


void pushBP()
{
    VAR_ idx = intConstructor_i(bp);

    bp = sp;
    push(&idx);
}
