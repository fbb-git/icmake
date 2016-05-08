#ifndef INCLUDED_PROCESS_
#define INCLUDED_PROCESS_

#include <regex.h>

#include "../options/options.h"

typedef struct 
{
    regex_t 
    regex_t includes[2];
    regex_t *include;
                    
    Options *options;       // Options struct

    char const *classes;    // name of the CLASSES file
    char const *useAll;     // name of the useAll file
    char const *mainBase;   // name of the main header base name

    char **search;          // directories visited so far
    int nSearch;

    char **key;             // gch dependencies directory keys
    char **value;     
    int nKey;
    int nValue;

    int visitTouch;

    int cwd;                // FD of current working directory
    int verbose;            // show files being touched.
} Process;

void ProcessCons(Process *process, Options *options);
void dependencies(Process *process);
void writeCLASSESdep(Process *process);

#endif







