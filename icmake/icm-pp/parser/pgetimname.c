#include "parser.ih"

static char buffer[MAX_PATHLEN];

char *p_getIMname()
{
    strcpy(buffer, p_dirsep);   /* not an absolute path: IM paths are 
                                    prepended to dest */
    while (1)
    {
        switch (yylex())
        {
            case 0:
            case '\n':
            rss_error("#include file specification not ending in >");

            case WORD:
                if (scanner_text()[0] == '>')
                    return rss_strdup(buffer);

            // FALLING THRU
            default:
                strcat(buffer, scanner_text());
            break;
        }
    }
}
