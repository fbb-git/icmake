/*
                         I C M - C O M P . C
*/

#include "iccomp.h"

#ifdef MSDOS
#pragma comment(lib, "icmcomp")
#pragma comment(lib, "../rss/icrss")
#endif

extern int yydebug;

int main (argc, argv)            /* icm-comp source(txt) dest(bin) */
    int
        argc;
    char
        **argv;
{
    if (argc != 3)
    {
        copyright("Make Optimizing Compiler", version, release, 1);
        error("Usage: %s source dest\n"
              "where:\n"
              "\tsource: source file to compile\n"
              "\t        (normally output from ICM-PP)\n"
              "\tdest:   name of binary file to generate\n"
              ,
              program_name(argv[0]));
    }

    if
    (
        !(yyin = fopen(argv[1], "rt"))     /* open text file for parsing */
        ||
        !(s_bin = fopen(argv[2], "w+b"))   /* open binary file to write/read */
    )
        error("%s Can't read/write file(s)");

                                            /* malloc the dead-stack */
    dead = xrealloc(NULL, sizeof(size_t));

    stringbuf = xstrdup(nullstring);        /* malloc initial stringbuf */
    lexstring = xstrdup(nullstring);        /* initial lexstring */

                                            /* go to first codebyte pos */
    fseek(s_bin, sizeof(BIN_HEADER_), SEEK_SET);

    #ifdef YYDEBUG
        yydebug = YYDEBUG;
    #endif

    yyparse();                              /* parse the source */

    if (!yynerrs)                            /* backend if no errors */
        backend();
    else                                    /* informative message */
        printf("\n%d error(s) detected\n", errcount);

    return(yynerrs != 0);                    /* returnvalue */
}
