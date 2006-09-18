#ifndef MSDOS

#include <ctype.h>
#include <stdio.h>
#include "icrssdef.h"

char *_strlwr (char *s)
{
    register char
        *cp;

    for (cp = s; *cp; ++cp)
        *cp = tolower(*cp);

    return (s);
}
#endif
