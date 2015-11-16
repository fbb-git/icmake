#include "icm-exec.ih"

void usage(char const *argv0)
{
    register char const *program = rss_programName(argv0);

    rss_copyright(program);

    printf ("This program is run as a child process of icmake.\n"
            "Usage: %s [-t] bimfile\n"
            "where: -t      - option indicating that 'bimfile' must be\n"
            "                 removed on exit.\n"
            "       bimfile - binary makefile to execute.\n\n"
        , program);

    exit(0);
}
