#ifndef INCLUDED_OPTIONS_
#define INCLUDED_OPTIONS_

#include <regex.h>

typedef struct 
{
    char *parser;
    char *scanner;

    char *classes;
    char *useAll;

    char *ih;
    char *mainih;

    int remove;
    int verbose;

    int precomp;

    int nArgs;
    char **arg;

    regex_t useAllRE;
} Options;
        
Options  *OptionsCons(int argc, char **argv);

inline char const *oClasses(Options *options)
{
    return options->classes;
}

inline char const *oParser(Options *options)
{
    return options->parser;
}

inline char const *oScanner(Options *options)
{
    return options->scanner;
}

inline char const *oMainih(Options *options)
{
    return options->mainih;
}

inline int oVerbose(Options *options)
{
    return options->verbose;
}

inline char const *oIH(Options *options)
{
    return options->ih;
}

#endif




