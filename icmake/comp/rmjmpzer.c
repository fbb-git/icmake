/*
                            R M J M P Z E R . C
*/

#include "iccomp.h"

unsigned rm_jmp_zero(codelen, list, listlen)
    register unsigned
        codelen,
        listlen;
    unsigned
        *list;
{
    return
    (
        listlen && (list[listlen - 1] == codelen) ?
            (sizeof(INT8) + sizeof(INT16))
        :
            0
    );
}
