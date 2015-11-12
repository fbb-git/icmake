#include "stack.ih"

VAR_ *top()
{
    stacktestunderflow();
    return stack + sp - 1;
}
