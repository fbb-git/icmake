/*
\funcref{rss_hexString}{char $*$rss_hexString (\params)}
    {
        {uint16_t} {val} {value to convert}
        {uint16_t} {len} {requested string length}
    }
    {stringrepresentation of {\em val}}
    {}
    {}
    {hexstrin.c}
    {
        This function converts a value {\em val} to hexadecimal representation
        in a string with length {\em len}. The string may be preceded by zero's
        to ensure the length.

        The result of the conversion is stored in a static buffer, which is
        returned. Repetitive calls to {\em rss_hexString()} will overwrite this
        buffer.

        {\bf Note that} {\em len} may not exceed 9. The size of the static
        buffer is only 10 chars.

    }
*/

#include "rss.ih"

char *rss_hexString(size_t val, size_t len)
{
    register int dlen = len;    /* until %zd format is generally available */
    static char retbuf[10];
    char buf[10];

    sprintf (buf, "%%%d.%dx", dlen, dlen);
    sprintf (retbuf, buf, (uint16_t)val);
    return retbuf;
}
