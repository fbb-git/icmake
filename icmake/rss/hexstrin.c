/*
\funcref{hexstring}{char $*$hexstring (\params)}
    {
        {UNS16} {val} {value to convert}
        {UNS16} {len} {requested string length}
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
        returned. Repetitive calls to {\em hexstring()} will overwrite this
        buffer.

        {\bf Note that} {\em len} may not exceed 9. The size of the static
        buffer is only 10 chars.

    }
*/

#include "icrssdef.h"

char *hexstring (size_t val, size_t len)
{
    register int dlen = len;    /* until %zd format is generally available */
    static char retbuf[10];
    char buf[10];

    sprintf (buf, "%%%d.%dx", dlen, dlen);
    sprintf (retbuf, buf, (UNS16)val);
    return retbuf;
}
