/* Force conversion of expression to boolean expression */

#include "parser.ih"

void fetob(SemVal *e)
{
    if (test_type(e, e_bool))
        return;                             /* done if boolean aloready */

    eToStack(e);                            /* convert to code unless bool */
    gencode (e, op_jmp_true);
    gencode (e, op_jmp, j_falselist);
    set_type(e, e_stack | e_bool);
}
