#define msg

#include "icmake.ih"

void inspectFlags(char const *program)
{
    if (flags & f_about)                    /* -a specified: about info */
        about(program);

    int test = flags & f_commandMask;       /* select all command-flags */

    if ((test & (test - 1)))    /* not a power of 2 -> multiple options */
        rss_error("multiple options are not supported");
}




