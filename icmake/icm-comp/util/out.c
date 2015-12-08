#include "util.ih"

void util_out(FILE *bin, void const *source, unsigned size)
{
    if
    (
        size
        &&
        !fwrite(source, size * sizeof(int8_t), 1, bin)
    )
        rss_fatal(0, 0, "can't write the bim-file");
}
