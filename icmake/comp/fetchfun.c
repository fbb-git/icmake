/*
                           F E T C H F U N . C
*/

#include "iccomp.h"

size_t fetchfun()
{
    register size_t idx;

                                            /* test function defined */
    if ((idx = looksym(&funtab)) == funtab.n_defined)
        semantic ("Function '%s()' not defined", lexstring);

    return idx;
}
