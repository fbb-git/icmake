/*
    Function {\em rss_getOpcode()} attempts to read an opcode from file {\em
    f}. This file must be opened in read/binary mode (see the constant {\em
    "r"} in file {\em icm.h}).

    When the reading operation fails, --1 is returned.
*/

/*#define msg
*/

#include "rss.ih"

Opcode rss_getOpcode (FILE *f)
{
    char op = 0;

    if (!fread (&op, sizeof(char), 1, f))
        op = (char)-1;

    msg("next opcode: 0x%x", op);

    return (Opcode) op;
}
