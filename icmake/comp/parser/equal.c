/*
                            E Q U A L . C
*/

#include "parser.ih"

ESTRUC_ *equal(ESTRUC_ *lval, ESTRUC_ *rval)
{
    btoi(lval);                             /* convert boolean to i */
    btoi(rval);

    if (conflict(lval, rval, op_eq))        /* test type conflict */
        return lval;

    if ((lval->type & rval->type & (size_t)~ALLTYPES) == e_const)
    {
        if (test_type(lval, e_int))
            lval->evalue = (lval->evalue == rval->evalue);
        else
        {
            lval->evalue = !
                      (
                        strcmp
                        (
                            g_stringtab[lval->evalue].string,
                            g_stringtab[rval->evalue].string
                        )
                      );
            set_type(lval, e_int | e_const);
        }
    }
    else
        defcode(lval, rval, op_eq);

    return lval;                            /* return new expression */
}
