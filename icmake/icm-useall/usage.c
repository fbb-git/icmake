#include "main.ih"

void usage(char const *progname)
{
    rss_copyright(progname = rss_programName(progname));

    printf(
    "Usage: %s [options] args\n"
    "Where:\n"
    "   [options] - optional arguments (short options between parentheses):\n"
    "      --classes file       - use 'file' instead of 'CLASSES'\n"
    "      --gch (-g)           - write .gch dependencies in CLASSES.dep\n"
    "      --mainBase basename  - use 'basename' instead of 'main'\n"
    "      --icmconf file       - use 'file' instead of 'icmconf'\n"
    "      --help (-h)          - provide this help\n"
    "      --verbose (-V)       - show touched files; more info if "
                                                                "specified \n"
    "                             multiple times\n"
    "      --version (-v)       - show version information and terminate\n"
    "   args   - specify name(s) of files to inspect in subdirectories.\n"
    "            @ represents the sub-directory's name\n"
    "\n",
    progname);

    exit(0);
}
