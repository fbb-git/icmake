/*                       P R O G R A M N . C
    ported to non-MSDOS systems pwp 93 07 15

    % 1 name
\functoc {program\_name}
    % 2 declaration
{char * \fname (\params\ )}
    % 3 arguments
{{char *}{argv0}{The full pathname of the program, as given by, e.g.,
                 \Var{argv[0]}}
}
    % 4 return value
{A pointer to only the basename of the program.}
    % 5 functions used
{}
    % 6 see also
{}
    % 7 source file
{programn.c}
    % 8 description
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

char *program_name(char *argv)
{
    register char
        *d;

    if ( (d = strrchr (argv, DIRSEP)) )
        return (d + 1);
    return (argv);
}

