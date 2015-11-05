#include "parser.ih"

SemVal *return_stmnt(ExprType op, SemVal *e)
{
    if (!test_type(e, e_code))
        etoc(e);

    size_t idx = symtabLastFunction();

    if ((OPCODE_)op == op_ret)              /* return opcode received */
    {
        ExprType funType = symtabFunType(funIdx);

                            /* void if the union of the type of the function
                                and the type of the expression is not a std
                                type */
        if ((e_typeMask & (funType | e->type)) == 0)
        {
            gencode(e, op);                 /* generate the 'ret' opcode */
            return e;                       /* done */
        }

        if (!(test_type(e, funType & e_typeMask)))
            semantic("Incorrect returntype for function '%s()'", last->name);
    }

    gencode(e, op_pop_reg);
    gencode(e, op);

    return e;
}
