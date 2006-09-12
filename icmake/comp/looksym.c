/*
                                L O O K S Y M . C
*/

#include "iccomp.h"

unsigned looksym(tab)
    SYMTAB_
        *tab;
{
    register unsigned
        index;

    for (index = 0; index < tab->n_defined; index++)
        if (!strcmp(tab->symbol[index].name, string))   /* string found ? */
            break;                                      /* done */

    return (index);                 /* return string index */
}
