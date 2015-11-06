#ifndef INCLUDED_PARSER_H_
#define INCLUDED_PARSER_H_

#include "../global.h"

void parser();              /* call once */
int yyparse(void);
int parser_backend();


#endif
