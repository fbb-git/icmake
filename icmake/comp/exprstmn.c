/*
                            E X P R S T M N . C
*/

#include "iccomp.h"

ESTRUC_ *expr_stmnt(e)
    ESTRUC_
        *e;
{
    btoi(e);                                /* convert boolean to i */

    if (lastop == op_copy_var)
        copy_to_pop(e);
    else if
    (
        test_type(e, e_code)
        &&
        !test_type(e, e_pre_inc_dec | e_post_inc_dec)
    )
        gencode(e, op_asp, 1);

    return (e);
}
