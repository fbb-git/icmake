#include "stack.ih"

Variable *top()
{
    stacktestunderflow();
    return stack + sp - 1;
}
