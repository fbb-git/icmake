#ifndef INCLUDED_PARSER_H_
#define INCLUDED_PARSER_H_

#include "../global.h"

void parser(char **argv);              /* call once */
int yyparse(void);
int parser_backend();


#endif
