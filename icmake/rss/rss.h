#ifndef _INCLUDED_RSS_H_
#define _INCLUDED_RSS_H_

#include "types.ih"

#include <stdio.h>

extern char version[];
extern char release[];

void rss_makePath(char *path, char const *dir, char const *fname, 
                                                char const *ext);
void rss_splitPath(char const *path, char *dir, char *fname, char *ext);


                                    /* The rss_change* functions return
                                       dynamically allocated NTBSs */
char *rss_changeExt(char const *path, char const *ext);
char *rss_changeBase(char const *path, char const *base);
char *rss_changePath(char const *path, char const *newDirs);

void    rss_copyright(char const *program);     /* copyright message */

char   *rss_findFirst(char const *fspec, size_t attrib);
char   *rss_findNext(void);             /* remaining matching entries   */

char   *rss_fgetz (char *, size_t, FILE *);

char const *rss_getExt(char const *path);
char const *rss_getDext(char const *path);
char const *rss_getBase(char const *path);
char const *rss_getPath (char const *path);

char     *rss_getString(FILE *, int32_t, size_t);

char     *rss_hexString (size_t, size_t);

char     *rss_programName(char *argv0);  /* make programname from argv[0] */

char     *rss_strUnescape(char *);

char     *rss_strdup(char const *);
char     *rss_strcat (char *, char const *);

void     rss_msg_(char const *path, char *fmt, ...); /* prints a msg to stderr. 
                                        Use it by doing #define msg before
                                        reading rss.h, and then call msg(fmt,
                                        ...) to specify a message
                                    */
void     rss_error(char const *fmt, ...);
void     rss_spawnErr(char const *program);

void     *rss_realloc (void *, size_t);

int      rss_exists(char const *);
int      rss_older(char const *, char const *);
int      rss_younger(char const *, char const *);

int16_t    rss_getInt16(FILE *);

OPCODE_  rss_getOpcode (FILE *);

uint16_t    rss_getVar(FILE *, BinHeader *, VAR_ **);

void     rss_initVar(VAR_ *);

BinHeader *rss_readHeader(FILE *f, size_t v);

    /* to activate msg(...) calls do '#define msg' before reading rssh.h */

#ifdef msg
    #undef msg
    #define msg(...)    rss_msg_(__FILE__, __VA_ARGS__)
#else
    #undef msg
    #define msg(...)
#endif

#endif
