#include "options.ih"

static int accept(char const *label, char const *key, char const *value)
{
    return strcmp(label, key) == 0 && value && strlen(value) > 0;
}

void oIcmconf(char *argv0)
{
    FILE *in = openFile(sopts.d_icmconf, "r");

    char *line;
    int count = 0;

    while ((line = getLine(in)))
    {
        Vector const *vector = regMatch(&sopts.d_icmconfRE, line);
        free(line);
 
        if (vector)                // match
        {
            char const *key   = at(vector, 1);
            char const *value = at(vector, 2);

            if (strcmp("PRECOMP", key) == 0)
            {
                if (sopts.d_gch == UNSPECIFIED)
                {
                    optMsg(2, "inspecting .gch files");
                    sopts.d_gch = GCH;
                }
            }

            else if (accept("IH", key, value))
            {
                optMsg(2, "used header extension: %s", value);
                sopts.d_ih = rss_strdup(value);
            }

            else if (accept("USE_ALL", key, value))
            {
                if (sopts.d_use_all == (char *)UNSPECIFIED)
                {
                    optMsg(2, "USE_ALL filename: %s", value);
                    sopts.d_use_all = rss_strdup(value);
                }
            }

            else if (accept("PARSER_DIR", key, value))
            {
                optMsg(2, "implied parser dir.: %s", value);
                sopts.d_parser = rss_strdup(value);
            }

            else if (accept("SCANNER_DIR", key, value))
            {
                optMsg(2, "implied scanner dir.: %s", value);
                sopts.d_scanner = rss_strdup(value);
            }
        }
    }
    fclose(in);

    if (sopts.d_go == UNSPECIFIED)
        usage(argv0);

    if (sopts.d_gch == UNSPECIFIED)
    {
        optMsg(2, "not inspecting .gch files");
        sopts.d_gch = NO_GCH;
    }

    if (sopts.d_use_all == (char *)UNSPECIFIED)
    {
        optMsg(2, "not inspecting USE_ALL files");
        sopts.d_use_all = NULL;
    }
}



