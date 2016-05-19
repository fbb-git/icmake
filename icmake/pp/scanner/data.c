#include "scanner.ih"

char    *sc_definition;
int     sc_getDefine;
void    (*sc_ptr)(void);
int     sc_eof;
unsigned  sc_lastLineNr;
