#include "options.ih"

void setUseAll(Options *options)
{
        // at this point, d_useAll contains the name of the icmconf file

    FILE *in = openFile(options->useAll, "r");

    char *line;
    while ((line = getLine(in)))
    {
        char *cp = regMatch(&options->useAllRE, line);

        if (cp)
        {
            free(options->useAll);
            options->useAll = cp;
            return;
        }
    }

    if (options->verbose != 0)
        printf("no USE_ALL activated in %s\n", options->useAll);

    exit(0);
}



