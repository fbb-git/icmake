#include "util.ih"

FILE *openFile(char const *name, char const *mode)
{
    FILE *ret = fopen(name, mode);

    if (ret == NULL)
    {
        printf("can't %s `%s'\n", 
                    strcmp(mode, "r") == 0 ? "read" : "write",
                    name);
        exit(1);
    }

    return ret;
}
