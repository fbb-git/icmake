/*
                           F E T C H F U N . C
*/

#include "iccomp.h"

unsigned fetchfun()
{
    register unsigned
        index;

                                            /* test function defined */
    if ((index = looksym(&funtab)) == funtab.n_defined)
        semantic ("Function '%s()' not defined", string);

    return (index);
}
