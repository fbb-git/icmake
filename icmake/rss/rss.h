#ifndef _INCLUDED_RSS_H_
#define _INCLUDED_RSS_H_

#include "types.ih"

#include <stdio.h>

extern char version[];
extern char release[];

void        rss_makePath(char *, char const *, char const *,
                        char const *, char const *);
void        rss_splitPath(char const *, char *, char *, char *, char *);

char const *rss_changeExt(char const *, char const *);
char const *rss_changeBase(char const *, char const *);
char const *change_path (char const *, char const *);

int      chesc(char *, int *);
void     copyright(char *, char *, char *);     /* copyright message */
char     *filefound(void);                      /* test attrib/pattern  */
char     *findfirst(char const *, size_t);    /* first entry matching pattern */
char     *findnext(void);                       /* remaining matching entries   */
char     *fgetz (char *, size_t, FILE *);

char const *get_ext(char const *);
char const *get_dext(char const *);
char const *get_base(char const *);
char const *get_path (char const *);

int      ic_getoptindex(void);                  /*  ICCE getopt functions   */
int      ic_getopt(int *, char **);
char     *ic_getoptval(int *, char **);

// #define  getoptindex ic_getoptindex         /*  and their mappings      */
// #define  getopt      ic_getopt
// #define  getoptval   ic_getoptval

char     *getstring (FILE *, INT32, size_t);

char     *hexstring (size_t, size_t);

char     *program_name(char *);             /* make programname from argv[0] */

char     *stresc(char *);

char     *try_source(char const *);         /* return allocated source[.im] */
char     *xstrdup(char const *);
char     *xstrcat (char *, char const *);

void     msg_(char const *path, char *fmt, ...); /* prints a msg to stderr. 
                                        Use it by doing #define msg before
                                        reading rss.h, and then call msg(fmt,
                                        ...) to specify a message
                                    */
void     error (char *, ...);
void     spawn_err (char *);

void     *xrealloc (void *, size_t);

int      exists  (char const *);
int      older   (char const *, char const *);
int      younger (char const *, char const *);

INT16    getint16 (FILE *);

OPCODE_  getopcode (FILE *);

UNS16    getvar(FILE *, BIN_HEADER_ *, VAR_ **);

void     initvar(VAR_ *);

BIN_HEADER_ *readheader(FILE *f, size_t v);

    /* to activate msg(...) calls do '#define msg' before reading rssh.h */

#ifdef msg
    #undef msg
    #define msg(...)    msg_(__FILE__, __VA_ARGS__)
#else
    #undef msg
    #define msg(...)
#endif

#endif
