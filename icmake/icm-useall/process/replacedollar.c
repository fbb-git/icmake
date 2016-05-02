#include "process.ih"

char const *replaceDollar(char const *arg, char  const *subdir)
{
    int subdirLen = strlen(subdir);

    char *ret = rss_strdup(arg);

    while (1)
    {
        char *at = strrchr(ret, '@');

        if (at == NULL)
            return ret;

        int atPos = at - ret;
        char *newRet = (char *)rss_realloc(0, strlen(ret) + subdirLen + 1);

        memcpy(newRet, ret, atPos);                 // cp to @
        newRet[atPos] = 0;

        strcat(newRet, subdir);                     // append subdir
        strcat(newRet, ret + atPos + 1);            // append ret's tail

        free(ret);
        ret = newRet;
    }
}
