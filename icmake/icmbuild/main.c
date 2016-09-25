/* #define msg
*/

#include "icmbuild.ih"

int main(int argc, char **argv)
{
    if (!rss_exists("icmconf") || (argc > 1 && strcmp(argv[1], "-h") == 0))
        return usage();

    char *arg[argc + 3];                // args to call icmake on
                                        // LIBDIR/icmbuild 

    arg[0] = "icmake";
    arg[1] = "-t.";
    arg[2] = rss_strcat(rss_strdup(LIBDIR), "/icmbuild");

    for (int argvIdx = 1, end = argc + 1; argvIdx != end; ++argvIdx)
        arg[argvIdx + 2] = argv[argvIdx];

    execvp(arg[0], arg);                // run the icmbuild script

    rss_spawnErr("icmbuild");           // does exit(1)
}
