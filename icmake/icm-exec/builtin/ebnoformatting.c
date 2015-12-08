#define msgx
#include "builtin.ih"

unsigned eb_noFormatting(void *dest, unsigned start, unsigned lastIdx)
{
    gb_listIndex = 0;
    for (unsigned idx = start; idx != lastIdx; ++idx)
    {
        msg("write arg %u", idx);
        eb_writeArgument(dest, idx);
    }

    return lastIdx - start;
}
