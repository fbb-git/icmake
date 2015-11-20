/*
    Function {\em rss_getVar()} attempts to read the variables defined in a
    binary makefile. Argument {\em headerp} is expected to point to a {\em
    BIN\_HEADER\_} struct filled with header information.

    {\em var} is the address of a pointer to {\em VAR\_} structures. {\em
    rss_getVar()} reallocates the pointer as necessary; therefore, {\em $*$var}
    must point to allocated memory or must be {\em NULL}. For each created
    variable of the type {\bf list} or {\bf string}, data field
    is set to {\em NULL} reflecting that the variable is not yet in use.

    When no error occurs, {\em rss_getVar()} returns the number of read
    variables and restores the file pointer {\em f} to the location prior
    to reading. When an error occurs, {\em --1} is returned and the file
    pointer is not repositioned.
*/

/* #define msg
*/

#include "rss.ih"

uint16_t rss_getVar(Variable **varDest, FILE *f, BinHeader *headerp)
{
    register size_t varIdx = 0;
    register Variable *var = NULL;
    int32_t curoffs;

    if (headerp->offset[1] == headerp->offset[2])
        return 0;

    curoffs = ftell(f);
    if (fseek(f, headerp->offset[1], SEEK_SET))
        return (uint16_t)-1;

    size_t nVars = 0;

    msg("begin offset: %x, end offset: %x", headerp->offset[1], \
                                        headerp->offset[2]);

    while (ftell(f) < headerp->offset[2])
    {
        ++nVars;

                                /* make room for the next variable record */
        var = rss_realloc(var, nVars * sizeof(Variable));

        char type;

        if (! fread(&type, sizeof(char), 1, f))
            rss_error("cannot read the variable section");

        msg("read variable %u, offset at: %x", nVars, ftell(f));

                        /*  Need to receive one single standard type. 
                            One type is 1 bit, so if no bits are set or
                            if more than one bit has been set (using
                            the power of 2 trick) an invalid type was read */
        if (type == e_null || type & (type - 1))
            rss_error ("bad variable type (var #%d)\n", nVars);

                        /* initialize the new variable to 0 */
        memset(var + varIdx, 0, sizeof(Variable));

        var[varIdx].type = type;

        ++varIdx;
    }

    *varDest = var;                     /* set the external pointer */
    fseek (f, curoffs, SEEK_SET);
    return nVars;
}

