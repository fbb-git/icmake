/*
\funcref{getvar}{UNS16 getvar (\params)}
    {
        {FILE} {*f} {binary makefile to read from}
        {BIN\_HEADER\_} {*headerp} {pointer to header information}
        {VAR\_} {**var} {address of pointer to {\em VAR\_} structs}
    }
    {number of read variables, or --1 upon failure}
    {xrealloc(), error(), initvar()}
    {getstring(), readheader()}
    {getvar.c}
    {
        Function {\em getvar()} attempts to read the variables defined in a
        binary makefile. Argument {\em headerp} is expected to point to a {\em
        BIN\_HEADER\_} struct filled with header information.

        {\em var} is the address of a pointer to {\em VAR\_} structures. {\em
        getvar()} reallocates the pointer as necessary; therefore, {\em $*$var}
        must point to allocated memory or must be {\em NULL}. For each created
        variable of the type {\bf list} or {\bf string}, the {\em vu.i} field
        is set to {\em NULL} to reflect that the variable is not (yet) in use.
        The {\em count} field is set to 1, reflecting one user of the attached
        memory block.

        When no error occurs, {\em getvar()} returns the number of read
        variables and restores the file pointer {\em f} to the location prior
        to reading. When an error occurs, {\em --1} is returned and the file
        pointer is not repositioned.
    }

Example:
{\footnotesize
    \begin{verbatim}
        // 'f' is assumed to be the opened file,
        UNS16
            nvar,
            i;
        VAR_
            *var = NULL;
        BIN_HEADER_
            *headerp;

        headerp = readheader (f);
        if ( (nvar = getvar (f, headerp, &var)) == -1 )
            error ("cannot get variables from binary makefile");
        for (i = 0; i < nvar; i++)
        {
            printf ("Variable %d is a ", i);
            if (var [i].type & e_str)
                puts ("string");
            else if (var [i].type & e_int)
                puts ("integer);
            .
            .. etcetera
            .
        }
    \end{verbatim}
} % end footnotesize
*/

#include "rss.ih"

UNS16 getvar (FILE *f, BIN_HEADER_ *headerp, VAR_ **var)
{
    register size_t nvar = 0;
    INT32 curoffs;

    if (headerp->offset[1] == headerp->offset[2])
        return (0);

    curoffs = ftell (f);
    if (fseek (f, headerp->offset[1], SEEK_SET))
        return ( (UNS16) -1);

    while (ftell (f) < headerp->offset[2])
    {
        *var = xrealloc (*var, (nvar + 1) * sizeof (VAR_));
        if (! fread (*var + nvar, sizeof (VAR_), 1, f) )
            error ("cannot read in variables");
        if ((*var) [nvar].type > e_list)
            error ("bad variable type (var #%d)\n", nvar + 1);
        initvar (&(*var)[nvar]);
        nvar++;
    }

    fseek (f, curoffs, SEEK_SET);
    return (nvar);
}
