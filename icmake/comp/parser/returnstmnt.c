#include "parser.ih"

SemVal *return_stmnt(ExprType op, SemVal *e)
{
    Symbol const *last;

    if (!test_type(e, e_code))
        etoc(e);

    last = symtabLastFunction();

    if ((OPCODE_)op == op_ret)              /* return opcode received */
    {
        if
        (
            !
            (
                (                           /* void if the union of */
                    last->var.type          /* the type of the function */
                    |                       /* and the */
                    e->type                 /* type of the expression */
                )
                &                           /* intersected with */
                e_typeMask                    /* all types */
            )                               /* is empty. */
        )
        {
            gencode(e, op);                 /* generate the 'ret' opcode */
            return e;                       /* done */
        }

        if (!(test_type(e, last->var.type & e_typeMask)))
            semantic("Incorrect returntype for function '%s()'", last->name);
    }

    gencode(e, op_pop_reg);
    gencode(e, op);

    return e;
}
