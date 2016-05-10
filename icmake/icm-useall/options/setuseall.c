#include "options.ih"

void setUseAll(Options *options)
{
    FILE *in = openFile(options->icmconf, "r");

    char *line;
    int count = 0;

    while ((line = getLine(in)))
    {
        Vector const *vector = regMatch(&options->icmconfRE, line);
        free(line);
 
        if (vector)                // match
        {
            char const *key   = at(vector, 1);
            char const *value = at(vector, 2);

            if (strcmp("IH", key) == 0)
                options->ih = rss_strdup(value);

            else if (strcmp("USE_ALL", key) == 0)
                options->use_all = rss_strdup(value);

            else if (strcmp("PARSER_DIR", key) == 0)
               options->parser = rss_strdup(value);

            else if (strcmp("SCANNER_DIR", key) == 0)
                options->scanner = rss_strdup(value);
        }
    }

    fclose(in);
}



