

/* #define msg
*/

#include "parser.ih"

void p_outCode(SemVal *ep, int value, register unsigned size)
{
    register unsigned codelen;

    union
    {
        char buffer[2];
        int16_t int16;
    } u;


    codelen = ep->code ?                    /* use local codelen in register */
                ep->codelen
            :
                0;                          /* 0 if not yet any code */

    msg("   begin");

    if (size == sizeof(char))               /* p_assign char to write */
        u.buffer[0] = (char)value;
    else                                    /* use char[2] as intermediate */
        u.int16 = (int16_t)value;             /* to store int16_t value    */

    msg("   in between. ep is %p, code at %p, new codelen: %u", \
            ep, ep->code, codelen + size);
                                            /* make room for new code */
    ep->code = rss_realloc(ep->code, (codelen + size) * sizeof(char));

    msg("reallocated");

    msg("size = %u, buffer[0] = %x, [1] = %x", size, \
                                            u.buffer[0], u.buffer[1]);

                                            /* append the new code */
    memcpy(ep->code + codelen, u.buffer, size);

    ep->codelen = codelen + size;           /* update the codelen-counter */
    msg("   end");
}

