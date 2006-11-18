/*
                                L O O K S Y M . C
*/

#include "iccomp.h"

size_t looksym(tab)
    SYMTAB_
        *tab;
{
    register size_t
        index;

    for (index = 0; index < tab->n_defined; index++)
        if (!strcmp(tab->symbol[index].name, lexstring))/* string found ? */
            break;                                      /* done */

    return (index);                 /* return string index */
}
