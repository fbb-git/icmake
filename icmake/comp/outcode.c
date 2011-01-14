/*
                        O U T C O D E . C
*/

#include "iccomp.h"

void outcode(ESTRUC_ *ep, int value, register size_t size)
{
    register size_t
        codelen;
    union
    {
        char buffer[2];
        INT16 int16;
    } u;


    codelen = ep->code ?                    /* use local codelen in register */
                ep->codelen
            :
                0;                          /* 0 if not yet any code */

    if (size == sizeof(char))               /* assign char to write */
        u.buffer[0] = (char)value;
    else                                    /* use char[2] as intermediate */
        u.int16 = (INT16)value;             /* to store INT16 value        */

                                            /* make room for new code */
    ep->code = xrealloc(ep->code, (codelen + size) * sizeof(char));

                                            /* append the new code */
    memcpy(ep->code + codelen, u.buffer, size);

    ep->codelen = codelen + size;           /* update the codelen-counter */
}
