/*
\funcref{spawn\_err}{void spawn\_err (\params)}
    {
        {char}{*progname}{program name}
    }
    {}
    {rss_error()}
    {}
    {spawnerr.c}
    {

        This function can be called when an {\em exec()} or {\em spawn()} call
        indicates failure (by returning -1). Argument {\em progname} should
        indicate the program which should have been executed.

        An appropriate error message is printed and the program is halted.

    }
*/

#include "rss.ih"

void rss_spawnErr (progname)
char *progname;
{
    static char
        errmsg [] = "Can't exec %s: %s";

    switch (errno)
    {
        case E2BIG:
            rss_error (errmsg, progname, "command line too big");
        case EACCES:
            rss_error (errmsg, progname, "access denied");
        case EMFILE:
            rss_error (errmsg, progname, "too many open files");
        case ENOENT:
            rss_error (errmsg, progname, "no such file");
        case ENOEXEC:
            rss_error (errmsg, progname, "exec file format");
        case ENOMEM:
            rss_error (errmsg, progname, "out of memory");
        default:
            rss_error (errmsg, progname, "unknown error");
    }
}
