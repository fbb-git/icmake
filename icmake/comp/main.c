#include "main.ih"

int main (int argc, char **argv)            /* icm-comp source(txt) dest(bin) */
{
    if (argc != 3)
    {
        copyright("Make Optimizing Compiler", version, release);
        printf("Usage: %s source dest\n"
              "where:\n"
              "\tsource: source file to compile\n"
              "\t        (normally output from ICM-PP)\n"
              "\tdest:   name of binary file to generate\n"
              ,
              program_name(argv[0]));

        return 0;
    }

    if
    (
        !(yyin = fopen(argv[1], "rt"))     /* open text file for parsing */
        ||
        !(g_bin = fopen(argv[2], "w+b"))   /* open binary file to write/read */
    )
        error("%s Can't read/write file(s)");

                                            /* malloc the g_dead-stack */
    g_dead = xrealloc(NULL, sizeof(unsigned));
    g_dead[0] = 0;                          /* and initialize its element */

    g_stringbuf = xstrdup("");              /* malloc initial g_stringbuf */
    g_lexstring = xstrdup("");              /* initial g_lexstring */

                                            /* go to first codebyte pos */
    fseek(g_bin, sizeof(BIN_HEADER_), SEEK_SET);

    #if YYDEBUG
        yydebug = YYDEBUG;
    #endif

    yyparse();                              /* parse the source */

    if (!yynerrs)                            /* backend if no errors */
        backend();
    else                                    /* informative message */
        printf("\n%u error(s) detected\n", (unsigned)g_errcount);

    return yynerrs != 0;                    /* returnvalue */
}
