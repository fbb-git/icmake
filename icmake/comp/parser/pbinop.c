#include "parser.ih"

void p_binOp(SemVal *lval, SemVal *rval, OPCODE_ opcode)
{
    p_expr2stack(lval);                     /* convert to code */
    p_expr2stack(rval);
    p_catCode(lval, rval);
    p_generateCode(lval, opcode);          /* append instruction */
    set_type(lval, e_int | e_stack); /* set appropriate type */
}
