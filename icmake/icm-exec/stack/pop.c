#include "stack.ih"

#include "../int/int.h"
#include "../string/string.h"

void stack_pop()
{
    s_testUnderflow();
    destructor(gs_stack + --gs_sp);
}







