

/* #define msg
*/

#include "scanner.ih"

void scanner(char const *infile, void (*ptr)(void))
{
    filestack_push(yylineno, infile);
    yyin = filestack_tos()->file;

    sc_ptr = ptr;                   /* function called at EOF, when popping 
                                        a previous file */

    msg("Scanner readiing %s", infile);

}
