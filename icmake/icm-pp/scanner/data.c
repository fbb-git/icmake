#include "scanner.ih"

char    *sc_definition;
int     sc_getDefine;
void    (*sc_ptr)(void);
int     sc_eof;
size_t  sc_lastLineNr;
