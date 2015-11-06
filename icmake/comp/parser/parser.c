#include "parser.ih"

void parser(char **argv)
{
    symtab();
    scanner(argv[1]);

    if (!(gp_bin = fopen(argv[2], "w+b")))   /* open binary file  */
        error("%s Can't write `%s'", argv[2]);

                                            /* malloc the gp_dead-stack */
    gp_dead = xrealloc(NULL, sizeof(unsigned));
    gp_dead[0] = 0;                          /* and initialize its element */

    gp_stringbuf = xstrdup("");              /* malloc initial gp_stringbuf */
    util_setString("");                     /* initial util_string() */

                                            /* go to first codebyte pos */
    fseek(gp_bin, sizeof(BIN_HEADER_), SEEK_SET);

    #if YYDEBUG
        yydebug = YYDEBUG;
    #endif

    fprintf(stderr, "parser called\n");
}


