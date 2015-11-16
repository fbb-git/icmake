/*
    Function {\em rss_getVar()} attempts to read the variables defined in a
    binary makefile. Argument {\em headerp} is expected to point to a {\em
    BIN\_HEADER\_} struct filled with header information.

    {\em var} is the address of a pointer to {\em VAR\_} structures. {\em
    rss_getVar()} reallocates the pointer as necessary; therefore, {\em $*$var}
    must point to allocated memory or must be {\em NULL}. For each created
    variable of the type {\bf list} or {\bf string}, the {\em vu.i} field
    is set to {\em NULL} to reflect that the variable is not (yet) in use.
    The {\em count} field is set to 1, reflecting one user of the attached
    memory block.

    When no error occurs, {\em rss_getVar()} returns the number of read
    variables and restores the file pointer {\em f} to the location prior
    to reading. When an error occurs, {\em --1} is returned and the file
    pointer is not repositioned.

Example:
        // 'f' is assumed to be the opened file,
        uint16_t
            nvar,
            i;
        Variable
            *var = NULL;
        BinHeader
            *headerp;

        headerp = rss_readHeader (f);
        if ( (nvar = rss_getVar (f, headerp, &var)) == -1 )
            rss_error ("cannot get variables from binary makefile");
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
*/

#include "rss.ih"

uint16_t rss_getVar(FILE *f, BinHeader *headerp, Variable **var)
{
    register size_t nvar = 0;
    int32_t curoffs;

    if (headerp->offset[1] == headerp->offset[2])
        return 0;

    curoffs = ftell(f);
    if (fseek(f, headerp->offset[1], SEEK_SET))
        return (uint16_t)-1;

    while (ftell(f) < headerp->offset[2])
    {
        *var = rss_realloc (*var, (nvar + 1) * sizeof (Variable));

        char type;
        int16_t value;
        if (
            !fread(&type, sizeof(char), 1, f) 
            ||
            !fread(&value, sizeof(int16_t), 1, f)
        )
            rss_error ("cannot read the variable section");

        if (type > e_list)
            rss_error ("bad variable type (var #%d)\n", nvar + 1);

        (*var)[nvar].type = (ExprType)type;
        (*var)[nvar].vu.intval = value;

        rss_initVar(*var + nvar);
        ++nvar;
    }

    fseek (f, curoffs, SEEK_SET);
    return (nvar);
}
