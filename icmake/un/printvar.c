#include "icmun.ih"

static char buffer [10] = "[";

char *printvar(int idx)
{
    register int16_t i;

    if ((uint16_t)idx < 0x8000 )            /* pure variable number */
        strcpy(buffer + 1, rss_hexString ((size_t)idx, 4));
    else
    {
        i = idx - 0xc000;           /* correct for BP pos */

        strcpy (buffer + 1, "bp");
        if (i < 0)
        {
            strcat (buffer, "-");
            i = -i;
        }
        else
            strcat (buffer, "+");
        strcat (buffer, rss_hexString ((size_t)i, 4));
    }
    strcat (buffer, "]");
    return (buffer);
}
