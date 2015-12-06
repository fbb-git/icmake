#include "parser.ih"

int p_conflict(SemVal *lval, SemVal *rval, Opcode opcode) 
{
    register int ret = !(lval->type & rval->type & gp_opType[opcode]);

    if (ret)
        util_semantic(gp_typeConflict, gp_opstring[opcode]);

    return ret;
}
