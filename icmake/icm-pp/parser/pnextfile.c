#include "parser.ih"

char *p_nextFile()
{
    char const *text = scanner_text();

    return *text == '"' ?
                p_quotedName(text + 1)
            :
                p_IMfile();
}
