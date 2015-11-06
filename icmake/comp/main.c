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

    parser();

    yyparse();                              /* parse the source */

    return parser_backend();
}




