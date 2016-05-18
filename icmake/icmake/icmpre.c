#define msg

#include "icmake.ih"

void icmPre(char **argv)
{
    *argv = icm_pre;
    execvp(*argv, (char *const *)argv);

    rss_spawnErr(icm_pre);
}
