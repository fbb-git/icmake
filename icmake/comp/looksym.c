/*
                                L O O K S Y M . C
*/

#include "iccomp.h"

size_t looksym(tab)
    SYMTAB_
        *tab;
{
    register size_t
        idx;

    for (idx = 0; idx < tab->n_defined; idx++)
        if (!strcmp(tab->symbol[idx].name, lexstring))/* string found ? */
            break;                                      /* done */

    return (idx);                 /* return string idx */
}
