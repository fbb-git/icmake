#include <ctype.h>
#include "../rss/icrssdef.h"
#include "../icm.h"

typedef enum
{
    l_eof,
    l_space,
    l_string,
    l_single,
    l_ident,
    l_other,
} LEXER_;

typedef struct
{
    char
        *n;
    FILE
        *f;
    int
        l;
} FILESTACK_;

typedef struct
{
    char
        *ident,
        *redef;
} DEFINED_;

extern char
    *imdir,
    version[],
    release[],
    lexbuf [];

extern DEFINED_
    *defined;

extern FILESTACK_
    *filestack;

extern FILE
    *outfile;

extern int
    at_firstcol,
    filesp,
    ndefined,
    nocomment,
    nofileinfo,
    nostrings,
    strict_directives,
    output_active;

extern LEXER_
    lexer (void);

extern int
    finddef (char *);

extern void
    delete_std_comment (char *),
    directive (void),
    getident (char *),
    insert (char *),
    loadsym (void),
    no_comment (void),
    popfile (void),
    preload (char *, char *),
    process (LEXER_),
    pushfile (char *);
