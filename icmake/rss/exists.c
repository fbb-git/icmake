/*
                                E X I S T S . C
\funcref{exists}                          % name
    {int  \fname (\params)}            % type
    {{char $*$}{name}{pathname}}                              % args
    {1: the file exists,\\
     0: the file doesn't exist}
    {}
    {}
    {exists.c}                              % sourcefile
    {                               %description
        The function returns 1 if the filename given as its argument exists.
        Otherwise, 0 is returned.
    }
*/

#include "icrssdef.h"

int exists(char const *name)
{
    struct stat buf;

    return(!stat(name, &buf));
}
