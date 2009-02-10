/*
\funcref{spawn\_err}{void spawn\_err (\params)}
    {
        {char}{*progname}{program name}
    }
    {}
    {error()}
    {}
    {spawnerr.c}
    {

        This function can be called when an {\em exec()} or {\em spawn()} call
        indicates failure (by returning -1). Argument {\em progname} should
        indicate the program which should have been executed.

        An appropriate error message is printed and the program is halted.

    }
*/

#include "icrssdef.h"
#include "icm.h"
#include <errno.h>

void spawn_err (progname)
char *progname;
{
    static char
        errmsg [] = "Can't exec %s: %s";

    switch (errno)
    {
        case E2BIG:
            error (errmsg, progname, "command line too big");
        case EACCES:
            error (errmsg, progname, "access denied");
        case EMFILE:
            error (errmsg, progname, "too many open files");
        case ENOENT:
            error (errmsg, progname, "no such file");
        case ENOEXEC:
            error (errmsg, progname, "exec file format");
        case ENOMEM:
            error (errmsg, progname, "out of memory");
        default:
            error (errmsg, progname, "unknown error");
    }
}
