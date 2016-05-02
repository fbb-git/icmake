#define msg

#include "icmake.ih"

void useAll(char **argv)
{
    *argv = icm_useall;
    execvp(*argv, (char *const *)argv);

    rss_spawnErr(icm_useall);
}
