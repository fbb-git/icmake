#include "parser.ih"

SemVal *p_ternary(SemVal *cond, SemVal *ifTrue, SemVal *ifFalse)
{
    if ((ifTrue->type & ifFalse->type & e_typeMask) == 0)
    {
        util_semantic(gp_typeConflict, "?:");
        p_clearOperands(ifTrue, ifFalse);
        
        return cond;
    }

    if (test_type(cond, e_const))      /* constant: true or false  */
    {
        p_discard(cond);
        if (cond->evalue)
        {
            p_discard(ifFalse);
            p_expr2stack(ifTrue);
            return ifTrue;
        }

        p_discard(ifTrue);
        p_expr2stack(ifFalse);
        return ifFalse;
    }


    p_expr2stack(ifTrue);                   /* convert the expressions to code */
    p_expr2stack(ifFalse);

    p_generateCode(cond, op_jmp_false, j_falselist); /* jmp around the ifTrue code */
    p_patchupTrue(cond, 1);          /* destination for the ifTrue code */

    p_catCode(cond, ifTrue);           /* cond = cond + ifTrue */
    p_generateCode(cond, op_jmp, j_truelist);   /* jmp around the ifFalse code */

    p_patchupFalse(cond, 1);         /* destination of the false alternative */
    p_catCode(cond, ifFalse);         /* cond = cond + ifTrue + jmp + ifFalse */

    p_patchupTrue(cond, 1);          /* jump from ifTrue to the end of expr. */

    return cond;                     /* ?: return */
}




