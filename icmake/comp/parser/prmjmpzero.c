#include "parser.ih"

unsigned p_rmJmpZero(register unsigned codelen, unsigned *list, 
                   register unsigned listlen)
{
    return
        listlen && (list[listlen - 1] == codelen) ?
            (sizeof(int8_t) + sizeof(int16_t))
        :
            0
    ;
}
