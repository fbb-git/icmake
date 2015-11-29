#define msgx
#include "builtin.ih"

size_t eb_noFormatting(void *dest, size_t start, size_t lastIdx)
{
    gb_listIndex = 0;
    for (size_t idx = start; idx != lastIdx; ++idx)
    {
        msg("write arg %u", idx);
        eb_writeArgument(dest, idx);
    }

    return lastIdx - start;
}
