#include "parser.ih"

char const *p_nextFile()
{
    return *p_text == '"' ?
                p_quotedName(p_text + 1)
            :
                p_IMfile();
}
