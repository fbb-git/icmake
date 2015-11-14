#include "icmun.ih"

void dumpstring (s)
char *s;
{
    while (*s)
    {
        putchar(iscntrl(*s) ? '.' : *s);
        s++;
    }
}
