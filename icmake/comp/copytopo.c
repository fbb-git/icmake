/*
                        C O P Y T O P O . C
*/

#include "iccomp.h"

void copy_to_pop (e)
    ESTRUC_
        *e;
{
    e->code[e->codelen - sizeof(INT16) - sizeof(INT8)] = op_pop_var;
    lastop = op_pop_var;
}
