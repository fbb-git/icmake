#include "builtin.ih"

int eb_spawnvp (int mode, char const *prog, char const **av)
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

    _spawnvp (0, "ls", (char const **) args);

    return (0);
}
#endif
