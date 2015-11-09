#include "rss.ih"

glob_t gr_globData;                            /* globbing struct */
size_t gr_nextGlob;                         /* next name in list */

char gr_name[_MAX_PATH];
char gr_drive[_MAX_PATH];
char gr_dir[_MAX_PATH];
char gr_fname[_MAX_PATH];
char gr_ext[_MAX_PATH];

IcmakeFind gr_ifs;                            /* icmake find-struct */

