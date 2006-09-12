/*
\funcref{insert}{void insert (\params)}
    {
        {char} {*idname} {identifier to insert in symbols table}
    }
    {}
    {xrealloc()}
    {directive()}
    {insert.c}
    {
        {\em insert()} is called from {\em directive()} when an {\em \#define}
        directive is read.
        Function {\em insert()} is passed the name of a redefined identifier by
        the {\em idname} argument. The redefinition part is expected in the
        lexical buffer {\em lexbuf}.

        The definition is inserted by increasing the array of {\em DEFINED\_}
        structures, pointed to by {\em defined}, by one element. Then, the {\em
        ident} and {\em redef} fields of the newly created struct are assigned.

        After this, the counter {\em ndefined} is increased.
    }
*/

#include "icm-pp.h"

void insert (char *idname)
{
    defined = xrealloc (defined, (ndefined + 1) * sizeof (DEFINED_));
    defined [ndefined].ident = xstrdup (idname);
    defined [ndefined].redef = xstrdup (lexbuf);

    ndefined++;
}
