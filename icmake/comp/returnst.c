/*
                            R E T U R N S T . C
*/

#include "iccomp.h"

ESTRUC_ *return_stmnt(op, e)
    E_TYPE_
        op;
    ESTRUC_
        *e;
{
    SYMBOL_
        *last;

    if (!test_type(e, e_code))
        etoc(e);

    last = &funtab.symbol[funtab.n_defined - 1];

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
                ALLTYPES                    /* all types */
            )                               /* is empty. */
        )
        {
            gencode(e, op);                 /* generate the 'ret' opcode */
            return (e);                     /* done */
        }

        if (!(test_type(e, last->var.type & ALLTYPES)))
            semantic("Incorrect returntype for function '%s()'", last->name);
    }

    gencode(e, op_pop_reg);
    gencode(e, op);

    return (e);
}
