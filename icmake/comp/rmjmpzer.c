/*
                            R M J M P Z E R . C
*/

#include "iccomp.h"

size_t rm_jmp_zero(register size_t codelen, unsigned *list, 
                   register size_t listlen)
{
    return
    (
        listlen && (list[listlen - 1] == codelen) ?
            (sizeof(INT8) + sizeof(INT16))
        :
            0
    );
}
