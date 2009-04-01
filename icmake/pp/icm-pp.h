#include <ctype.h>
#include "../rss/icrssdef.h"
#include "../rss/icm.h"

typedef enum
{
    l_eof,
    l_space,
    l_string,
    l_single,
    l_ident,
    l_other
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

typedef struct
{
    size_t size;
    size_t len;
    char *data;
} STRING_;
#define STRING_BLOCK ((size_t)200)

extern char
    *imdir,
    version[],
    release[];

extern DEFINED_ *defined;
extern FILE *outfile;
extern FILESTACK_ *filestack;
extern STRING_ lexbuf;
extern int at_firstcol;
extern int filesp;
extern int ndefined;
extern int nocomment;
extern int nofileinfo;
extern int nostrings;
extern int output_active;
extern int strict_directives;

LEXER_ lexer (void);
int finddef(char *);
int negate_active(void);    /* negate the current request */
int nextchar(void);
int pop_active(void);       /* returns previous output_active value */
int push_active(int);       /* actual activity request */
int string_append(STRING_ *str, int ch);
int string_continue(STRING_ *str);
void construct_active(void);
void delete_std_comment (char *);
void directive (void);
void getident (STRING_ *);
void insert(char *);
void loadsym (void);
void no_comment (void);
void popfile (void);
void preload (char *, char *);
void process (LEXER_);
void pushback(int ch);
void pushfile (char *);
void skipblanks(void);
char *skip_until(char *cp);
void undef(char *cp);
