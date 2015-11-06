#include "parser.ih"

int conflict(SemVal *lval, SemVal *rval, OPCODE_ opcode) 
{
    register int ret;

    if ( (ret = !(lval->type & rval->type & gp_opType[opcode])) )
    {
        util_semantic(gp_typeConflict, gp_opstring[opcode]);
        clearbin(lval, rval);
    }
    return ret;
}
