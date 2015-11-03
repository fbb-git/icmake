#include "global.h"

size_t  g_nStrings;
size_t  g_errcount;
size_t  g_dead_sp;
size_t  g_sem_err;
size_t  g_hidden_called;
size_t *g_dead;

FILE *g_bin;

char *g_stringbuf;
char *g_lexstring;
char *g_filenames;
char *g_sourceName;

//SYMTAB_     g_funtab;
//SYMTAB_     g_globaltab;
//SYMTAB_    *g_entertab = &g_globaltab;

SemVal g_init;                     /* code initializing globals */

STRINGTAB_ *g_stringtab;

HIDDEN_FUNCTION_ g_hiddenFun[he_];
