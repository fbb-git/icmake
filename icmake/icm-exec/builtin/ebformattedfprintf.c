#define msgx

#include "builtin.ih"

unsigned eb_formattedFprintf(FILE *out, FormatDest formatDest)
{
    gb_pDestWrite = eb_fileWrite;               /* write to file or string:
                                                    here: to file */

    return eb_formatter(out, formatDest);
}

