#include "scanner.ih"

char *gs_filenames;
char *gs_savedText;
size_t   gs_savedLineNr;

size_t gs_fileSp = N_FILES;
FileStack gs_fileStack[N_FILES];


