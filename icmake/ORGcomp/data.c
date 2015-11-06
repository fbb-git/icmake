#include "global.h"

char *g_lexstring;                          /* resizing STRING buffer */
char *g_stringbuf;                          /* final STRING */

FILE *gp_bin;

size_t  gp_dead_sp;
size_t  gu_errcount;
size_t *gp_dead;
