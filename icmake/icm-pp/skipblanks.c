#include "icm-pp.h"

void skipblanks()
{
    register int ch;

    while ((ch = nextchar()) == ' ' || ch == '\t')
        ;

    pushback(ch);      /* push back next char, not ' ' */
}
