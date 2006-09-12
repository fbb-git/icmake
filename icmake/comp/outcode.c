/*
                        O U T C O D E . C
*/

#include "iccomp.h"

void outcode(ESTRUC_ *ep, int value, register unsigned size)
{
    register unsigned
        codelen;
    char
        buffer[2];

    codelen = ep->code ?                    /* use local codelen in register */
                ep->codelen
            :
                0;                          /* 0 if not yet any code */

    if (size == sizeof(char))               /* assign char to write */
        buffer[0] = (char)value;
    else                                    /* use char[2] as intermediate */
        *(INT16 *)buffer = (INT16)value;    /* to store INT16 value        */

                                            /* make room for new code */
    ep->code = xrealloc(ep->code, (codelen + size) * sizeof(char));

                                            /* append the new code */
    memcpy(ep->code + codelen, buffer, size);

    ep->codelen = codelen + size;           /* update the codelen-counter */
}
