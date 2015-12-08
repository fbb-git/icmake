#include "rss.ih"

glob_t gr_globData;                            /* globbing struct */
unsigned gr_nextGlob;                         /* next name in list */

unsigned gr_nErrors;

char gr_name[MAX_PATHLEN];
char gr_dir[MAX_PATHLEN];
char gr_fname[MAX_PATHLEN];
char gr_ext[MAX_PATHLEN];

IcmakeFind gr_ifs;                            /* icmake find-struct */

char gr_hexDigits[] = "0123456789abcdef";
