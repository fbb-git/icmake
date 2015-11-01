#include "parser.ih"

void copy_to_pop(ESTRUC_ *e)
{
    e->code[e->codelen - sizeof(INT16) - sizeof(INT8)] = op_pop_var;
    gp_lastOp = op_pop_var;
}
