#define msgx

#include "icmake.ih"

void inspectFlags(char const *program, char **argv)
{
    if (flags & f_showFlags)
        showFlags(argv);

    if (flags & f_about)                    /* -a specified: about info */
        about(program);

    int test = flags & f_commandMask;       /* select all command-flags */

    if ((test & (test - 1)))    /* not a power of 2 -> multiple options */
        rss_fatal(0, 0, "multiple action-options are not supported");

    if (flags == 0 || flags == f_force)
        noOptions(argv);
}




