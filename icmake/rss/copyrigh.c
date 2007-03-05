/*                       C O P Y R I G H . C
    ported to non-MSDOS systems pwp 93 07 15

    % 1 name
\functoc {copyright}
    % 2 declaration
{void \fname (\params\ )}
    % 3 arguments
{
    {char *}{function}     {function of the program}
    {char *}{version}      {version of the program}
    {char *}{years}        {string of years of the copyright notice}
    {int}   {distribution} {distribution type}
}
    % 4 return value
{}
    % 5 functions used
{}
    % 6 see also
{}
    % 7 source file
{copyrigh.c}
    % 8 description
{The function displays (to the standard output file) an {\sc icce} copyright
notice of the indicated program, using the standard {\sc icce} layout. The
distribution type is either restricted (value \Define{0}), in which case the
{\em Internal use only\,} string is used, or is not \Define{0}, in which case
the {\em All rights reserved\,} string is used.
}
*/

#include "icrssdef.h"

void copyright(char *function, char *versionStr, char *years)
{
    printf("\n"
           "%s  Version %s\n"
           "Copyright (c) GPL %s. NO WARRANTY.\n"
           "\n",
           function, versionStr, years);
}
