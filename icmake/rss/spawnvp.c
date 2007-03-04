#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "icrssdef.h"

int _spawnvp (int mode, const char *prog, const char **av)
{
    char
        buf [_MAX_PATH * 4];

    strcpy (buf, prog);
    av++;

    while (*av)
    {
        strcat (buf, " ");
        strcat (buf, *av);
        av++;
    }

    return (system (buf));
}

#ifdef DEBUG
int main ()
{
    static char
        *args [] = { "ls", "*.c", "*.h", NULL };

    _spawnvp (0, "ls", (const char **) args);

    return (0);
}
#endif
