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

#include "builtin.ih"

void fun_makelist()
{
    char  const *name = stringStr(top() - 1);   /* filemask string */

    reg = *listConstructor();

    if (*name)                          /* if valid name.. */
    {
        char
            drive[_MAX_DRIVE],          /* strings to create full */
            dir[_MAX_DIR],              /* filename, incl. path */
            fname[_MAX_FNAME],
            ext[_MAX_EXT],
            newname[_MAX_PATH];

        size_t attrib = intValue(top());   /* attribute to scan for */

                                        /* find a first name */
        char *namefound = findfirst (name, attrib);

        _splitpath (name, drive, dir, fname, ext);

        while (namefound)               /* as long as that succeeds */
        {
                                        /* make a new path */
            _makepath (newname, drive, dir, namefound, "");

                                        /* add entry to the list */
#ifdef MSDOS                            /* under DOS: lower case */
            listAdd_cP(&reg, _strlwr(newname));
#else                                   /* under UNIX: case as-is */
            listAdd_cP(&reg, newname);
#endif
            namefound = findnext();     /* determine new name */
        }
        listSort(&reg);
    }
}
