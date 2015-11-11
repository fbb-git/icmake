#include "parser.ih"

void defcode(SemVal *lval, SemVal *rval, OPCODE_ opcode)
{
    eToStack(lval);                     /* convert to code */
    eToStack(rval);
    catcode(lval, rval);
    gencode(lval, opcode);          /* append instruction */
    set_type(lval, e_int | e_stack); /* set appropriate type */
}
