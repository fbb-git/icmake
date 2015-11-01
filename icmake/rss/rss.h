#ifndef _INCLUDED_RSS_H_
#define _INCLUDED_RSS_H_

#include "types.ih"

#include <stdio.h>

extern char version[];
extern char release[];

void        ic_makepath(char *, char const *, char const *,
                        char const *, char const *);
void        ic_splitpath(char const *, char *, char *, char *, char *);
size_t      ic_dos_findfirst(char const *, size_t, struct _find_t *);
size_t      ic_dos_findnext(struct _find_t *);

int         ic_spawnlp(int, char const *, char const *, ...);
int         ic_spawnvp(int, char const *, char const **);
char        *ic_strlwr(char *);
char        *ic_strupr(char *);

char const *change_ext (char const *, char const *);
char const *change_base (char const *, char const *);
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

#endif
