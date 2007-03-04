/*
\funcref{insert}{void insert(\params)}
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

        Inside the definition constructions like \texttt{\$\{IDENT\}} may be used.
        If \texttt{IDENT} is a previously defined macro, its definition will replace 
        \texttt{\$\{IDENT\}}. In one single definition at most 100
        replacements are allowed.
        
        After this, the counter {\em ndefined} is increased.
    }
*/

#include "icm-pp.h"

static char *replace_defines(char *txt)
{
    char *ptr1 = txt;
    size_t const max_replacements = 100;
    size_t replacement = 0;

    while ((ptr1 = strstr(ptr1, "${"))) /* find the opening characters */
    {
        int  idx;                     /* index in the #define database */
        char *ptr2 = strchr(ptr1, '}'); /* and the closing character */
        char *newContents;
        
        if (!ptr2)                      /* none found, then done */
            break;

        *ptr2 = 0;                      /* terminate the presumed ${IDENT}  */
                                        /* at final brace                   */

        idx = finddef(ptr1 + 2);      /* lookup the identifier            */

        if (idx == -1)                /* unknown identifier: keep ${...}  */
        {
            *ptr2 = '}';                /* restore the closing brace        */
            ptr1 = ptr2 + 1;            /* continue beyond this ${...}      */
            continue;
        }
            
        if (++replacement > max_replacements)
            error("%s: %d: too many replacements in #define definition",
               filestack[filesp].n, filestack[filesp].l);
        
        newContents = 
                malloc(
                      1 +               /* ascii-Z                          */
                      ptr1 - txt +      /* plus length of initial txt       */
                                        /* plus length of replacement text  */
                      strlen(defined[idx].redef) +
                      strlen(ptr2 + 1)  /* plus text beyond ${IDENT}        */
                );

        *ptr1 = 0;                      /* cut-off text beyond initial text */

        strcpy(newContents, txt);       /* write initial text               */
                                        /* add replacement                  */
        strcat(newContents, defined[idx].redef);
        strcat(newContents, ptr2 + 1);  /* add the tail                     */
                                        /* ptr1 points into the new text    */
        ptr1 = newContents +(ptr1 - txt);

        free(txt);
        txt = newContents;
    }    

    return txt;
}    
        

void insert(char *idname)
{
    defined = xrealloc(defined, (ndefined + 1) * sizeof(DEFINED_));
    defined[ndefined].ident = xstrdup(idname);

    defined[ndefined].redef = replace_defines(xstrdup(lexbuf.data));
/*
fprintf(stderr, "Inserted `%s' with definition `%s'\n",
        defined[ndefined].ident, 
        defined[ndefined].redef);
*/

    ndefined++;
}
