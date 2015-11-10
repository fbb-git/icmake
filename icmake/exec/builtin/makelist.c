/*
\funcref{fun\_builtin_makeList}{void fun\_builtin_makeList ()}
    {}
    {}
    {newvar(), sortlist()}
    {}
    {funmakel.c}
    {

        This function converts the last pushed string into a listvariable
        holding expanded filenames. The {\em reg} register is set to hold the
        list.  The list is alphabetically sorted.

        The argument at the top of the stack may be, optionally, an
        attribute mask. In this case, the mask is used in a
        {\em findfirst() / findnext ()} loop. By default the
        attribute {\em \_A\_NORMAL} is used.
    }
*/

#include "builtin.ih"

void builtin_makeList()
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
        char *namefound = rss_findFirst (name, attrib);

        rss_splitPath (name, drive, dir, fname, ext);

        while (namefound)               /* as long as that succeeds */
        {
                                        /* make a new path */
            rss_makePath (newname, drive, dir, namefound, "");

                                        /* add entry to the list */
            listAdd_cP(&reg, newname);

            namefound = rss_findNext();     /* determine new name */
        }
        listSort(&reg);
    }
}
