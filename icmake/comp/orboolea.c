/*
                            O R B O O L E A . C
*/

#include "iccomp.h"

ESTRUC_ *or_boolean(lexp, rexp)
    ESTRUC_
        *lexp,
        *rexp;
{
    if (lexp->type & rexp->type & e_const)  /* two constants: compute result */
    {
        lexp->evalue =
            (test_type(lexp, e_str) || lexp->evalue)
            ||
            (test_type(rexp, e_str) || rexp->evalue);
        set_type(lexp, e_const | e_int);
    }
    else                                    /* at least one code-part */
    {
        fetob(lexp);                        /* boolean code */
        fetob(rexp);

        lexp->codelen -= rm_jmp_zero(lexp->codelen, lexp->falselist,
                                    lexp->falselen);
        patchup_false(lexp, 1);
        lexp = catcode(lexp, rexp);
        set_type(lexp, e_bool | e_code);
    }

    return (lexp);
}
