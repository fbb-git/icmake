#include "rss.ih"

char *rss_fgetz (char *buf, unsigned maxlen, FILE *f)
{
    register unsigned
        i;

    if (! maxlen)
        return (NULL);

    for (i = 0; i < maxlen - 1; i++)
    {
        buf [i] = fgetc (f);
        if (! buf [i])
            break;
    }

    buf [i] = '\0';
    return (buf);
}
