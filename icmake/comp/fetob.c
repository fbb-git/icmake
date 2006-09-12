/*
                                F E T O B . C

             Force conversion of expression to boolean expression
*/

#include "iccomp.h"

void fetob(e)
    ESTRUC_
        *e;
{
    if (test_type(e, e_bool))
        return;                             /* done if boolean aloready */

    etoc(e);                            /* convert to code unless bool */
    gencode (e, op_jmp_true);
    gencode (e, op_jmp, j_falselist);
    set_type(e, e_code | e_bool);
}
