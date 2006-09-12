/*
\funcref{fun\_makelist}{void fun\_makelist ()}
    {}
    {}
    {newvar(), sortlist()}
    {}
    {funmakel.c}
    {

        This function converts the last pushed string into a listvariable
        holding expanded filenames. The {\em reg} register is set to hold the
        list.  The list is alphabetically sorted.

        {\bf Note that} under MSDOS, the elements of the list are converted
        to lower case.

        The argument at the top of the stack may be, optionally, an
        attribute mask. In this case, the mask is used in a
        {\em findfirst() / findnext ()} loop. By default the
        attribute {\em \_A\_NORMAL} is used.
    }
*/

#include "icm-exec.h"

void fun_makelist ()
{
    register char
        *name;                          /* filemask string */
    register int
        attrib,                         /* attribute to scan for */
        size = 0;                       /* sz of created list */
    char
       *namefound,                      /* returned by findfirst()/next() */
       drive [_MAX_DRIVE],              /* strings to create full */
       dir [_MAX_DIR],                  /* filename, incl. path */
       fname [_MAX_FNAME],
       ext [_MAX_EXT],
       newname [_MAX_PATH];

    reg = newvar (e_list);              /* return type: list */

    attrib = stack [sp].vu.intval;      /* get function arguments */
    name = stack [sp - 1].vu.i->ls.str;

    if (*name)                          /* if valid name.. */
    {
        _splitpath (name, drive, dir, fname, ext);

                                        /* find a first name */
        namefound = findfirst (name, attrib);
        while (namefound)               /* as long as that succeeds */
        {
                                        /* make a new path */
            _makepath (newname, drive, dir, namefound, "");

                                        /* add entry to the list */
#ifdef MSDOS                            /* under DOS: lower case */
            reg = addtolist (reg, _strlwr (newname));
#else                                   /* under UNIX: case as-is */
            reg = addtolist (reg, newname);
#endif
            size++;                     /* size of the list so far */

            namefound = findnext();     /* determine new name */
        }

        reg.vu.i->ls.list.size = size;
        reg = sortlist (reg);
    }
}
