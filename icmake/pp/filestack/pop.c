#include "filestack.ih"

void filestack_pop()
{
    free(fs_stack[--fs_size].filename);
}
