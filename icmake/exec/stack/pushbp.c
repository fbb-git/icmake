#include "stack.ih"


void pushBP()
{
    VAR_ idx = *intConstructor_i((int)bp);

    bp = sp;
    push(&idx);
}
