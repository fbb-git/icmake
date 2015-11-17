/*#define msg
*/

#include "builtin.ih"

size_t eb_formattedFprintf(FILE *out, size_t start)
{
    gb_pDestWrite = eb_fileWrite;

    return eb_formatter(out, start);
}

