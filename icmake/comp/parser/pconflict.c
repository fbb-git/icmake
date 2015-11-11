#include "parser.ih"

int p_conflict(SemVal *lval, SemVal *rval, OPCODE_ opcode) 
{
    register int ret;

    if ( (ret = !(lval->type & rval->type & gp_opType[opcode])) )
    {
        util_semantic(gp_typeConflict, gp_opstring[opcode]);
        p_clearOperands(lval, rval);
    }
    return ret;
}
