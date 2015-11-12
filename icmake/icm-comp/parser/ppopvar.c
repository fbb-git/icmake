#include "parser.ih"

void p_popVar(SemVal *e)
{
    e->code[e->codelen - sizeof(int16_t) - sizeof(int8_t)] = op_pop_var;
    gp_lastOp = op_pop_var;
}
