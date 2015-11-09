/*
\funcref{rss_getInt16}{int16_t rss_getInt16 (\params)}
    {
        {FILE} {*infile} {binary macro file to read from}
    }
    {16-bits integer read from {\em infile}}
    {}
    {rss_getOpcode(), rss_getString()}
    {rss_getInt16.c}
    {
        This function reads a 16-bit signed integer value from the binary macro
        file, supplied as argument. It may be used, e.g., to read an argument
        of a {\em op\_asp} opcode.

        The returned result may be cast to {\em unsigned} by the caller.
    }
*/

#include "rss.ih"

int16_t rss_getInt16 (infile)
FILE *infile;
{
    int16_t
        tmp;
    register int32_t
        offs;

    offs = ftell (infile);

    if (! fread (&tmp, sizeof (int16_t), 1, infile) )
        rss_error ("argument read error at offset %u", (unsigned) offs);

    return (tmp);
}
