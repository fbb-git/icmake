#ifndef INCLUDED_OPTIONS_
#define INCLUDED_OPTIONS_

enum
{
    DRY,
    GO,
    NO_GCH,
    GCH,
    UNSPECIFIED,
};

void OptionsCons(int argc, char **argv);

char const *optClasses();
char const *optParser();
char const *optScanner();
char const *optMainih();
char const *optIH();
char const *optUseAll();
int optVerbose();
int optGch();
int optGo();
void optMsg(int requiredLevel, char const *fmt, ...);

#endif




