#define msgx
#include "filestack.ih"

FileStack const *filestack_tos()
{
    msg("tos() looks at %u", fs_size - 1);

    return &fs_stack[fs_size - 1];
}
