#define msgx

#include "parser.ih"

int p_trySIconvert(SemVal *lval, SemVal *rval)
{
    msg("intypes: 0x%x, 0x%x", lval->type, rval->type);

    if                  /* assigning a string of 1 char to an int is OK:    */
    (                   /* the int gets the ascii value of its character    */
        test_type(lval, e_int)
        && 
        test_type(rval, e_str | e_const)  == (e_str | e_const)
        && 
        strlen(gp_stringTable[rval->evalue].string) == 1
    )
    {
        set_type(rval, e_int | e_const);        /* change the str to int */
        rval->evalue = gp_stringTable[rval->evalue].string[0];  /* value is */
                                                /* str's 1st character */
        return 1;
    }

    return 0;
}
