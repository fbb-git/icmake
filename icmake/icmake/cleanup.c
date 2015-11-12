#include "icmake.ih"

void cleanup()
{
    fflush(stdout);
    fflush(stderr);

    if (flags & f_rmPim)
        unlink(pimFile);

    if (flags & f_rmBim)
        unlink(bimFile);
}
