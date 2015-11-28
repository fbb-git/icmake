/*
        This function can be called when an {\em exec()} or {\em spawn()} call
        indicates failure (by returning -1). Argument {\em progname} should
        indicate the program which should have been executed.

        An appropriate error message is printed and the program is halted.
*/

#include "rss.ih"

void rss_spawnErr(char const *progname)
{
    static char errmsg [] = "Can't exec %s: %s";

    switch (errno)
    {
        case E2BIG:
            rss_fatal(0, 0, errmsg, progname, "command line too big");
        case EACCES:
            rss_fatal(0, 0, errmsg, progname, "access denied");
        case EMFILE:
            rss_fatal(0, 0, errmsg, progname, "too many open files");
        case ENOENT:
            rss_fatal(0, 0, errmsg, progname, "no such file");
        case ENOEXEC:
            rss_fatal(0, 0, errmsg, progname, "exec file format");
        case ENOMEM:
            rss_fatal(0, 0, errmsg, progname, "out of memory");
        default:
            rss_fatal(0, 0, errmsg, progname, "unknown error");
    }
}
