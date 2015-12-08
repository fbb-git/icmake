

/* #define msg
*/

#include "parser.ih"

SemVal *p_return(ExprType op, SemVal *e)
{
    msg("BEGIN");

    if (!test_type(e, e_stack))
        p_expr2stack(e);

    unsigned funIdx = symtab_lastFunction();

    if ((Opcode)op == op_ret)              /* return opcode received */
    {
        ExprType funType = symtab_funType(funIdx);

        msg("Got op_ret, function type %s is 0x%x", symtab_funName(funIdx), \
                                                  funType);


                            /* void if the union of the type of the function
                                and the type of the expression is not a std
                                type */
        if ((e_typeMask & (funType | e->type)) == 0)
        {
            msg("void function, generate 'ret' opcode");

            p_generateCode(e, op);          /* generate the 'ret' opcode */

            msg("END");
            return e;                       /* done */
        }

        if (!(test_type(e, funType & e_typeMask)))
            util_semantic("Incorrect returntype for function '%s()'", 
                                                    symtab_funName(funIdx));
    }

    msg("poping the pushed return value and returning");

    p_generateCode(e, op_pop_reg);
    p_generateCode(e, op);

    return e;
}
