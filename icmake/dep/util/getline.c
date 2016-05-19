#include "util.ih"

char *getLine(FILE *in)
{
    char buffer[100];

    char *ret = 0;

    while (fgets(buffer, 100, in) != NULL)
    {
        int len = strlen(buffer);
        int stop = buffer[len - 1] == '\n';
        if (stop)
            buffer[len - 1] = 0;

        ret = rss_strcat(ret, buffer);
        if (stop)
            return ret;
    }

    free(ret);
    return NULL;
}
