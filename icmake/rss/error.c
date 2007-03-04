/*
\funcref{error}{void error (\params, ...)}
    {
        {char} {*fmt} {format string}
    }
    {}
    {}
    {}
    {error.c}
    {
        Prints an error message, defined by the format string and (optional)
        following arguments, to {\em stderr}. If {\em stdout} is redirected,
        the message is printed to {\em stdout} too. Then the global {\em int}
        variable {\em error\_occurred} is incremented to reflect an error (a
        cleanup function, attached by {\em atexit()},
        may inspect this value and take appropriate action).

        After this, the program is terminated with an exit value 1.
    }
*/

#include "icrssdef.h"

int error_occurred = 0;

void error (char *fmt, ...)
{
    va_list
        args;

    fflush (stdout);
    fflush (stderr);

    va_start (args, fmt);
    vfprintf (stderr, fmt, args);
    fputc ('\n', stderr);

    if (! isatty (fileno (stdout)))
    {
        va_start (args, fmt);
        vprintf (fmt, args);
        putchar ('\n');
    }

    error_occurred++;
    exit (1);
}
