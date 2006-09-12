#include "icmun.h"

static char
    buffer [10] = "[";

char *printvar (INT16 index)
{
    register INT16       
    	i;

    if ((UNS16)index < 0x8000 )            /* pure variable number */
        strcpy(buffer + 1, hexstring (index, 4));
    else
    {
        i = index - 0xc000;		    /* correct for BP pos */

        strcpy (buffer + 1, "bp");
        if (i < 0)
        {
            strcat (buffer, "-");
            i = -i;
        }
        else
            strcat (buffer, "+");
        strcat (buffer, hexstring (i, 4));
    }
    strcat (buffer, "]");
    return (buffer);
}
