#include "rss.ih"

#ifdef HAVE_GLOB
    glob_t gr_globData;                            /* globbing struct */
    size_t gr_nextGlob;                         /* next name in list */
#else
    FILE *gr_fp = NULL;                         /* echo program pipe */
#endif

char gr_name[_MAX_PATH];
char gr_drive[_MAX_PATH];
char gr_dir[_MAX_PATH];
char gr_fname[_MAX_PATH];
char gr_ext[_MAX_PATH];

