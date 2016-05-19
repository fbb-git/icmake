#include "aux.ih"

char **aux_testRmBim(int *argcPtr, char **argv)
{
    if (strcmp(argv[1], "-t") == 0)         /* -t option found */
    {
        argv[1] = argv[0];                  /* remove the -t argument */
        ++argv; 
        --*argcPtr; 
        ga_bimname = argv[1];               /* define temporary name */
    }

    return argv;
}
