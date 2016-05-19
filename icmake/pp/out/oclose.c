#define msgx

#include "out.ih"

void o_close()
{
    fputc('\n', o_file);
    fclose(o_file);

    if (rss_nErrors() != 0)
        unlink(o_outFilename);
}
