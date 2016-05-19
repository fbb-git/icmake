#include "builtin.ih"

int eb_spawnvp(int mode, char const *prog, char const **av)
{
    unsigned length = strlen(prog);   /* determine length of required buffer */

    char const **begin = av + 1;        
    while (*begin)
        length += strlen(*begin++);

                                    /* add 1 for ASCIIZ + # elements in av */
    char *buf = rss_realloc(NULL, length + 1 + begin - av);

    strcpy(buf, prog);              /* copy the program */
    while (*++av)                   /* plus all blank delimited extra args */
    {
        strcat(buf, " ");
        strcat(buf, *av);
    }

    return system(buf);             /* run the program */
}

#ifdef DEBUG
int main ()
{
    static char *args[] = { "ls", "*.c", "*.h", NULL };

    eb_spawnvp(0, "ls", (char const **) args);
}
#endif
