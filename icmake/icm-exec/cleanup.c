/*
        This function is attached to the `at-exit' list by {\em main()}.
*/

#include "icm-exec.ih"

void cleanup()
{
    aux_unlinkBim();
    opcodefun_close();
}
