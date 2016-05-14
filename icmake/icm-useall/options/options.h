#ifndef INCLUDED_OPTIONS_
#define INCLUDED_OPTIONS_

void OptionsCons(int argc, char **argv);

char const *optClasses();
char const *optParser();
char const *optScanner();
char const *optMainih();
char const *optIH();
char const *optUseAll();
int optVerbose();
int optGch();
int optDry();
void vmsg(int requiredLevel, char const *fmt, ...);

#endif




