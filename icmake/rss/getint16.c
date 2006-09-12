/*
\funcref{getint16}{INT16 getint16 (\params)}
    {
        {FILE} {*infile} {binary macro file to read from}
    }
    {16-bits integer read from {\em infile}}
    {}
    {getopcode(), getstring()}
    {getint16.c}
    {
        This function reads a 16-bit signed integer value from the binary macro
        file, supplied as argument. It may be used, e.g., to read an argument
        of a {\em op\_asp} opcode.

        The returned result may be cast to {\em unsigned} by the caller.
    }
*/

#include "icrssdef.h"

INT16 getint16 (infile)
FILE *infile;
{
    INT16
        tmp;
    register INT32
        offs;

    offs = ftell (infile);

    if (! fread (&tmp, sizeof (INT16), 1, infile) )
        error ("argument read error at offset %u", (unsigned) offs);

    return (tmp);
}
