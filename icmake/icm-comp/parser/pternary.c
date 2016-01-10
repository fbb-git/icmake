#include "parser.ih"

SemVal *p_ternary(SemVal *cond, SemVal *ifTrue, SemVal *ifFalse)
{
    if ((ifTrue->type & ifFalse->type & e_typeMask) == 0)
    {
        util_semantic(gp_typeConflict, "?:");
        return p_nullFrame3(cond, ifTrue, ifFalse);
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

    p_expr2bool(cond);              /* convert the condition to bool */

    p_expr2stack(ifTrue);           /* convert the expressions to code */
    p_expr2stack(ifFalse);

    p_patchupTrue(cond, 1);          /* destination for the ifTrue code */

    p_catCode(cond, ifTrue);           /* cond = cond + ifTrue */
    p_generateCode(cond, op_jmp, j_truelist);   /* jmp around ifFalse */

    p_patchupFalse(cond, 1);        /* destination of the false alternative */
    p_catCode(cond, ifFalse);       /* cond = cond + ifTrue + jmp + ifFalse */

    p_patchupTrue(cond, 1);         /* jump from ifTrue to the end of expr. */

    set_type(cond, ifTrue->type);   /* return type must be the ifTrue/ifFalse
                                        type */

    return cond;                    /* ?: return */
}




