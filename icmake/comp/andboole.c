/*
                            A N D B O O L E . C
*/

#include "iccomp.h"

ESTRUC_ *and_boolean(lexp, rexp)
    ESTRUC_
        *lexp,
        *rexp;
{
    if (lexp->type & rexp->type & e_const)  /* two constants: compute result */
    {
        lexp->evalue =
            (test_type(lexp, e_str) || lexp->evalue)
            &&
            (test_type(rexp, e_str) || rexp->evalue);
        set_type(lexp, e_const | e_int);
    }
    else                                    /* at least one code-part */
    {
        fetob(lexp);
        fetob(rexp);

        patchup_true(lexp, 1);
        lexp->truelen = 0;
        lexp = catcode(lexp, rexp);
        set_type(lexp, e_bool | e_code);
    }

    return (lexp);
}
