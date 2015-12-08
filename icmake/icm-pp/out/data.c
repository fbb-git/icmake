#include "out.ih"

FILE   *o_file;
int     o_space;    /* if != 0 then write one space */
unsigned  o_nl;       /* if 0, remembers the last scanner_lineNr() value */
int     o_atBOL;    /* if 1 we're at Begin of line */
char   *o_outFilename;
