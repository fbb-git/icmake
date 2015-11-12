#include "parser.ih"

SemVal *p_return(ExprType op, SemVal *e)
{
    if (!test_type(e, e_stack))
        p_expr2stack(e);

    size_t funIdx = symtab_lastFunction();

    if ((OPCODE_)op == op_ret)              /* return opcode received */
    {
        ExprType funType = symtab_funType(funIdx);

                            /* void if the union of the type of the function
                                and the type of the expression is not a std
                                type */
        if ((e_typeMask & (funType | e->type)) == 0)
        {
            p_generateCode(e, op);                 /* generate the 'ret' opcode */
            return e;                       /* done */
        }

        if (!(test_type(e, funType & e_typeMask)))
            util_semantic("Incorrect returntype for function '%s()'", 
                                                    symtab_funName(funIdx));
    }

    p_generateCode(e, op_pop_reg);
    p_generateCode(e, op);

    return e;
}
