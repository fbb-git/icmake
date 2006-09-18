#ifndef MSDOS

#include <ctype.h>
#include <stdio.h>
#include "icrssdef.h"

char *_strupr(char *s)
{
    register char
        *cp;

    for (cp = s; *cp; ++cp)
        *cp = toupper(*cp);

    return (s);
}
#endif
