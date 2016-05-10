#ifndef INCLUDED_OPTIONS_
#define INCLUDED_OPTIONS_

#include <regex.h>

typedef struct 
{
    regex_t icmconfRE;

    char *classes;
    char *icmconf;
    char *mainih;
    char *ih;
    char *use_all;


    int dry;
    int rm;
    int verbose;

    char *parser;
    char *scanner;
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

inline char const *oIH(Options *options)
{
    return options->ih;
}

inline char const *oUseAll(Options *options)
{
    return options->use_all;
}


inline int oVerbose(Options *options)
{
    return options->verbose;
}

inline int oRm(Options *options)
{
    return options->rm;
}

inline int oDry(Options *options)
{
    return options->dry;
}

#endif




