/*
\funcref{getident}{void getident(\params)}
    {
        {char} {*buf} {buffer to store identifier}
    }
    {}
    {error()}
    {lexer()}
    {getident.c}
    {
        {\em getident()} is called from {\em lexer()} when an underscore
        character or a {\em[a-zA-Z]} character is read. {\em lexer()} pushes
        the character back onto the input file and calls {\em getident()} to
        read an identifier.

        Identifiers are defined as starting with {\em[\_a-zA-Z]} followed by
        zero or more {\em[\_a-zA-Z0-9]}.

        {\em getident()} performs no checking of the identifier length. The
        buffer where the identifier is stored is assumed to be large enough to
        hold the name.
    }
*/

#include "icm-pp.h"

void getident(STRING_ *str)
{
    register int ch;

    skipblanks();
    str->len = 0;
    while ((ch = nextchar()) == '_' || isalpha(ch))
        string_append(str, ch);
    pushback(ch);
    string_append(str, 0);
}
