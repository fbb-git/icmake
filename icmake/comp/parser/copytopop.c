#include "parser.ih"

void copy_to_pop(SemVal *e)
{
    e->code[e->codelen - sizeof(int16_t) - sizeof(int8_t)] = op_pop_var;
    gp_lastOp = op_pop_var;
}
