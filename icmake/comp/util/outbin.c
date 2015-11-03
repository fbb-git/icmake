#include "util.ih"

#include "../global.h"

void outbin(void const *source, size_t size)
{
    if
    (
        size
        &&
        !fwrite(source, size * sizeof(INT8), 1, g_bin)
    )
        error("Error in writing binary file");
}
