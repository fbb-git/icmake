#include "util.ih"

void util_out(FILE *bin, void const *source, size_t size)
{
    if
    (
        size
        &&
        !fwrite(source, size * sizeof(int8_t), 1, bin)
    )
        rss_error("Error in writing binary file");
}
