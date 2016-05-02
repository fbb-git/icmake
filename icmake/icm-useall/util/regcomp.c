#include "util.ih"

void regComp(regex_t *regex, char const *pattern)
{
    int regOut = regcomp(regex, pattern, REG_EXTENDED);

    if (regOut != 0)
    {
        char buffer[100];
        regerror(regOut, regex, buffer, 100);
        exit(1);
    }
}


        
