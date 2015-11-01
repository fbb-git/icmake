#ifndef INCLUDED_SYMTAB_H_
#define INCLUDED_SYMTAB_H_

#include "../../rss/rss.h"

typedef struct                              /* symtab used with the compiler */
{
    VAR_ var;
    char *name;
} SYMBOL_;

typedef struct
{
    size_t n_allocated;                        /* available memory */
    size_t n_defined;                          /* defined variables */
    SYMBOL_ *symbol;
} SYMTAB_;

size_t looksym(SYMTAB_ *tab);

#endif
