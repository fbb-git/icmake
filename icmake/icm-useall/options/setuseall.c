#include "options.ih"

void setUseAll(Options *options)
{
        // at this point, d_useAll holds the name of the icmconf file

    FILE *in = openFile(options->useAll, "r");

    free(options->useAll);
    options->useAll = NULL;

    char *line;
    int count = 0;

    while ((line = getLine(in)))
    {
        Vector const *vector = regMatch(&options->useAllRE, line);
        free(line);
 
        if (vector)                // match
        {
            char const *cp = at(vector, 1);

            if (strcmp("PRECOMP", cp) == 0)
                options->precomp = 1;
            else 
            {
                char const *value = at(vector, 2);

                if (strcmp("IH", cp) == 0)
                    options->ih = rss_strdup(value);

                else if (strcmp("USE_ALL", cp) == 0)
                    options->useAll = rss_strdup(value);

                else if (strcmp("PARSER_DIR", cp) == 0)
                   options->parser = rss_strdup(value);

                else if (strcmp("SCANNER_DIR", cp) == 0)
                    options->scanner = rss_strdup(value);
            }
        }
    }

    fclose(in);
}



