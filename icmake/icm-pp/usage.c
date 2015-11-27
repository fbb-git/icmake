#include "icm-pp.ih"

void usage(char const *argv0)
{
    char const *progname = rss_programName(argv0);

    rss_copyright(progname);

    printf("%s%s%s%s",
        "This program is commonly run as a child process of icmake.\n"
        "Usage: ",
            progname,
        "[flags] inputfile outputfile\n"
        "where:\n"
        "       flags       - optional flags, which may be:\n"
        "           -define SYM      : defines SYM having value \"1\"\n"
        "           -nostdsymbols    : don't load predefined symbols "
                            "(UNIX etc.)\n",
        "           -dumpsymbols     : show loaded symbols\n"
        "       inputfile   - icmake file\n"
        "       outputfile  - result of preprocessing\n"
        "\n");

    exit(0);
}
