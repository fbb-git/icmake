/*
        This function converts the last pushed string into a listvariable
        holding expanded filenames. The {\em reg} register is set to hold the
        list.  The list is alphabetically sorted.

        The argument at the top of the stack may be, optionally, an
        attribute mask. In this case, the mask is used in a
        {\em findfirst() / findnext ()} loop. By default the
        attribute {\em \_A\_NORMAL} is used.
*/

#include "builtin.ih"

void b_makeList()
{
    char  const *name = string_charp(stack_top() - 1);   /* filemask string */

    gb_reg = *listcons();

    if (*name)                          /* if valid name.. */
    {
        char
            dir[MAX_PATHLEN],              /* filename, incl. path */
            fname[MAX_PATHLEN],
            ext[MAX_PATHLEN],
            newname[MAX_PATHLEN];

        size_t attrib = int_value(stack_top());   /* attribute to scan for */

                                        /* find a first name */
        char *namefound = rss_findFirst (name, attrib);

        rss_splitPath (name, dir, fname, ext);

        while (namefound)               /* as long as that succeeds */
        {
                                        /* make a new path */
            rss_makePath (newname, dir, namefound, "");

                                        /* add entry to the list */
            list_add_charPtr(&gb_reg, newname);

            namefound = rss_findNext();     /* determine new name */
        }
        list_sort(&gb_reg);
    }
}
