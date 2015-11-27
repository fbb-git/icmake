#include "parser.ih"

//static char *err_msg[] =
//    {
//        "(",                            /* err_openpar_expected, */
//    };


int yyerror(char *s)
{
    printf("Error: %s", s);
//    printf("[%s] Line %d: %s", "<todo source>", s); // yylineno, s);

//    util_incError();
//
//    if (!yytext[0])
//        puts (": Unexpected end of file.");
//    else
//        printf(" at '%s': '%s'%s\n", yytext, err_msg[gp_parse_error],
//            gp_parse_error == err_in_expression ?
//                ""
//            :
//                " expected"
//        );

    return 0;
}

