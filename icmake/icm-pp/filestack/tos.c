#include "filestack.ih"

FileStack const *filestack_tos()
{
    return &fs_stack[fs_size - 1];
}
