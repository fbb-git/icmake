/*
    ported to non-MSDOS systems pwp 93 07 15
{The function modifies the full pathname of the program by removing the
extension (e.g., {\sc .exe}), and returns a pointer to the first character of
the basename of the function.

    Note well that the extension is removed from the original string, and that
    the returned pointer points sowhere inside the original string.

    The function {\em assumes\,} a path in which at least one DIRSEP
    precedes the first character of the program name.
    The program name may or may notr have an extension.
    This is not checked.
}
*/

#include "rss.ih"

char const *rss_programName(char const *argv)
{
    register char *d;

    return  (d = strrchr(argv, DIRSEP)) != NULL ? d + 1 : argv;
}








