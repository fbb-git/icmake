#include "util.ih"

void util_out(FILE *bin, void const *source, size_t size)
{
    if
    (
        size
        &&
        !fwrite(source, size * sizeof(INT8), 1, bin)
    )
        error("Error in writing binary file");
}
