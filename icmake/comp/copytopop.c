#include "iccomp.h"

void copy_to_pop(ESTRUC_ *e)
{
    e->code[e->codelen - sizeof(INT16) - sizeof(INT8)] = op_pop_var;
    lastop = op_pop_var;
}
