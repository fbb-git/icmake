#define msg

#include "icmake.ih"

void icmDep(char **argv)
{
    *argv = icm_pre;
    execvp(*argv, (char *const *)argv);

    rss_spawnErr(icm_pre);
}
