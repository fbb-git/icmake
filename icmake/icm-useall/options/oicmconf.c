#include "options.ih"

void oIcmconf()
{
    FILE *in = openFile(s_Options.icmconf, "r");

    char *line;
    int count = 0;

    while ((line = getLine(in)))
    {
        Vector const *vector = regMatch(&s_Options.icmconfRE, line);
        free(line);
 
        if (vector)                // match
        {
            char const *key   = at(vector, 1);
            char const *value = at(vector, 2);

            if (strcmp("PRECOMP", key) == 0)
                s_Options.rm = 1;

            else if (strcmp("IH", key) == 0)
                s_Options.ih = rss_strdup(value);

            else if (strcmp("USE_ALL", key) == 0)
                s_Options.use_all = rss_strdup(value);

            else if (strcmp("PARSER_DIR", key) == 0)
               s_Options.parser = rss_strdup(value);

            else if (strcmp("SCANNER_DIR", key) == 0)
                s_Options.scanner = rss_strdup(value);
        }
    }

    fclose(in);
}



