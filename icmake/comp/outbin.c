/*
                                O U T B I N . C
*/

#include "iccomp.h"

void outbin(source, size)
    void
        *source;
    size_t
        size;
{
    if
    (
        size
        &&
        !fwrite(source, size * sizeof(INT8), 1, s_bin)
    )
        error("Error in writing binary file");
}
