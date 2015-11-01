#ifndef INCLUDED_GLOBAL_H_
#define INCLUDED_GLOBAL_H_

#include <stdio.h>
#include "../rss/rss.h"
#include "symtab/symtab.h"

typedef enum                        /* order of elements must follow */
{                                   /* definition of hidden[] in     */
    he_older = 0,                   /* data.c                        */
    he_younger = 1,                 /* reserved values 0 and 1 */

    he_                             /* must be last ! */
} HIDDEN_ENUM_;


typedef struct
{
    char *name;                      /* name of the hidden fun */
    char *source;                   /* source of the hidden function */
    size_t type;                    /* returntype */
    size_t this;                    /* set to 1 if called */
    size_t nargs;                   /* # of arguments */
} HIDDEN_FUNCTION_;


typedef struct                      /* see also display code in */
{                                   /* callfun.c                */
    E_TYPE_ type;                   /* type of the expression */

    size_t truelen;
    size_t falselen;
    size_t continuelen;
    size_t codelen;                    /* length of the code */
    size_t evalue;                     /* index or value of the expression */

    size_t *truelist;
    size_t *falselist;
    size_t *continuelist;

    INT8 *code;
} ESTRUC_;

typedef struct
{
    unsigned index;                         /* index in stringsection */
    char *string;                           /* string itself */
} STRINGTAB_;


extern size_t   g_nStrings;
extern size_t   g_errcount;
extern size_t   g_dead_sp;
extern size_t   g_sem_err;
extern size_t   g_hidden_called;
extern size_t  *g_dead;

extern FILE *g_bin;

extern char *g_stringbuf;
extern char *g_lexstring;
extern char *g_filenames;
extern char *g_sourceName;

extern SYMTAB_ g_funtab;
extern SYMTAB_ local;
extern SYMTAB_ g_globaltab;
extern SYMTAB_ *g_entertab;

extern STRINGTAB_ *g_stringtab;

extern ESTRUC_ g_init;                  /* code initializing globals */

extern HIDDEN_FUNCTION_ g_hiddenFun[];

#endif
