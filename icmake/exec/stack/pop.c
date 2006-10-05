#include "stack.ih"

#include "../int/int.h"
#include "../string/string.h"

void pop()
{
    stacktestunderflow();
    destructor(stack + --sp);
}







