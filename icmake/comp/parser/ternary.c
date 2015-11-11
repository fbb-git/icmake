#include "parser.ih"

SemVal *ternary(SemVal *cond, SemVal *ifTrue, SemVal *ifFalse)
{
    if ((ifTrue->type & ifFalse->type & e_typeMask) == 0)
    {
        util_semantic(gp_typeConflict, "?:");
        clearbin(ifTrue, ifFalse);
        
        return cond;
    }

    if (test_type(cond, e_const))      /* constant: true or false  */
    {
        discard(cond);
        if (cond->evalue)
        {
            discard(ifFalse);
            eToStack(ifTrue);
            return ifTrue;
        }

        discard(ifTrue);
        eToStack(ifFalse);
        return ifFalse;
    }


    eToStack(ifTrue);                   /* convert the expressions to code */
    eToStack(ifFalse);

    gencode(cond, op_jmp_false, j_falselist); /* jmp around the ifTrue code */
    patchup_true(cond, 1);          /* destination for the ifTrue code */

    catcode(cond, ifTrue);           /* cond = cond + ifTrue */
    gencode(cond, op_jmp, j_truelist);   /* jmp around the ifFalse code */

    patchup_false(cond, 1);         /* destination of the false alternative */
    catcode(cond, ifFalse);         /* cond = cond + ifTrue + jmp + ifFalse */

    patchup_true(cond, 1);          /* jump from ifTrue to the end of expr. */

    return cond;                     /* ?: return */
}




