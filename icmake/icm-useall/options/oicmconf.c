#include "options.ih"

void oIcmconf()
{
    FILE *in = openFile(sopts.icmconf, "r");

    char *line;
    int count = 0;

    while ((line = getLine(in)))
    {
        Vector const *vector = regMatch(&sopts.icmconfRE, line);
        free(line);
 
        if (vector)                // match
        {
            char const *key   = at(vector, 1);
            char const *value = at(vector, 2);

            if (sopts.gch == 'i' && strcmp("PRECOMP", key) == 0)
                sopts.gch = 1;

            if (strcmp("IH", key) == 0)
                sopts.ih = rss_strdup(value);

            else if (strcmp(sopts.use_all, "i") == 0)
                sopts.use_all = strcmp("USE_ALL", key) == 0 ?
                                    NULL
                                :
                                    rss_strdup(value);

            else if (strcmp("PARSER_DIR", key) == 0 && value)
                sopts.parser = rss_strdup(value);

            else if (strcmp("SCANNER_DIR", key) == 0 && value)
                sopts.scanner = rss_strdup(value);
        }
    }

    fclose(in);
}



