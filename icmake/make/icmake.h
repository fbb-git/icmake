#include "../rss/icrssdef.h"

#include "../tmp/INSTALL.im"

#ifdef SUN
#include <memory.h>
#endif


typedef enum
{
    f_preprocessor  =   (1 << 0),
    f_compiler      =   (1 << 1),
    f_quiet         =   (1 << 2),
    f_redirected    =   (1 << 3),
    f_blunt         =   (1 << 4),
    f_icmake        =   (1 << 5),
    f_tmpbim        =   (1 << 6)
} FLAGS_;

extern char
    version[],
    release[],
    cant_read[],
    r[],
    rb[];

extern char *temporary;
extern char *source_name;
extern char *dest_name;
extern FILE *fdest;
extern FLAGS_ flags;
extern int errors;

int     compile_test (void);           /* test if compilation is needed */
int     options (char **, int*);       /* process flags */
void    abnormal_exit (int);           /* abnormal eop */
void    about(void);                   /* about icmake */
void    cleanup (void);                /* cleanup temp. info */
void    quote_blanks(char **);         /* quote arguments with blanks */
