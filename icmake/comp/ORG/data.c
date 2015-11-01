#include "global.h"

char *g_lexstring;                          /* resizing STRING buffer */
char *g_stringbuf;                          /* final STRING */

FILE *g_bin;

size_t  g_dead_sp;
size_t  g_errcount;
size_t *g_dead;
