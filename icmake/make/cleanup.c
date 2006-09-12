/*
                            C L E A N U P . C
*/


#include "icmake.h"

void cleanup()
{
    fflush(stdout);
    fflush(stderr);

    unlink(temporary);

    if (errors)
        unlink(dest_name);
}
