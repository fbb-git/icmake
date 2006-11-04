/*
                            R M J M P Z E R . C
*/

#include "iccomp.h"

size_t rm_jmp_zero(codelen, list, listlen)
    register size_t
        codelen,
        listlen;
    size_t
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
