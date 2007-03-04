/*
                             M A T H A S S . C
*/

#include "iccomp.h"

ESTRUC_ *math_ass(ESTRUC_ *lval, ESTRUC_ *rval, 
                    ESTRUC_ *(*fun)(ESTRUC_ *, ESTRUC_ *),
                    char *opstr)
{
    register E_TYPE_
        ltype;
    register size_t
        evalue;

    ltype = lval->type;
    evalue = lval->evalue;

    fun(lval, rval);                        /* perform operation */

    rval->type = ltype;                     /* restore ltype/value */
    rval->evalue = evalue;
    rval->codelen = 0;
    rval->code = NULL;

    return assignment(rval, lval, opstr); /* perform assignment */
}
