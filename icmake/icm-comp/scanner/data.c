#include "scanner.ih"

char gs_char[2];
char *gs_filenames;
char *gs_savedText;
unsigned   gs_savedLineNr;

unsigned gs_fileSp = N_FILES;
FileStack gs_fileStack[N_FILES];


