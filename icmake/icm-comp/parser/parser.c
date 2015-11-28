#include "parser.ih"

void parser(char **argv)
{
    symtab();
    scanner(argv[1]);

    if (!(gp_bin = fopen(argv[2], "w+b")))   /* open binary file  */
        rss_fatal(0, 0, "%s Can't write `%s'", argv[2]);

                                            /* malloc the gp_dead-stack */
    gp_dead = rss_realloc(NULL, sizeof(unsigned));
    gp_dead[0] = 0;                          /* and initialize its element */

    gp_stringbuf = rss_strdup("");              /* malloc initial gp_stringbuf */
    util_setString("");                     /* initial util_string() */

                                            /* go to first codebyte pos */
    fseek(gp_bin, sizeof(BinHeader), SEEK_SET);

/*
    #if YYDEBUG
        yydebug = YYDEBUG;
    #endif
*/
}


