/*
\funcref{getident}{void getident (\params)}
    {
        {char} {*buf} {buffer to store identifier}
    }
    {}
    {error()}
    {lexer()}
    {getident.c}
    {
        {\em getident()} is called from {\em lexer()} when an underscore
        character or a {\em [a-zA-Z]} character is read. {\em lexer()} pushes
        the character back onto the input file and calls {\em getident()} to
        read an identifier.

        Identifiers are defined as starting with {\em [\_a-zA-Z]} followed by
        zero or more {\em [\_a-zA-Z0-9]}.

        {\em getident()} performs no checking of the identifier length. The
        buffer where the identifier is stored is assumed to be large enough to
        hold the name.
    }
*/

#include "icm-pp.h"

void getident (char *buf)
{
    register int
        ch,
        index = 0;

    if ( (ch = fgetc (filestack [filesp].f)) != '_' &&
         ! isalpha (ch)
       )
        error ("%s: %d: identifier expected", filestack [filesp].n,
               filestack [filesp].l);

    buf [index++] = ch;
    while ( (ch = fgetc (filestack [filesp].f)) == '_' ||
            isalnum (ch)
          )
            buf [index++] = ch;

    ungetc (ch, filestack [filesp].f);
    buf [index] = '\0';
}
