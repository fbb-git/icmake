#ifndef INCLUDED_OPTIONS_
#define INCLUDED_OPTIONS_

#include <regex.h>

typedef struct 
{
    char const *classes;
    char const *mainBase;
    char *useAll;

    int gchDep;
    int verbose;

    int nArgs;
    char **arg;

    regex_t useAllRE;
} Options;
        
void OptionsCons(Options *options, int argc, char **argv);

#endif




