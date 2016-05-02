/*
        This function converts the last pushed string into a listvariable
        holding expanded filenames. The {\em reg} register is set to hold the
        list.  The returned list is alphabetically sorted.

    The stack is organized as follows:

    1: without older/younger

        stack[-1]   : op_hlt
        stack[-2]   : filemask value
        stack[-3]   : pattern


    2: with older/younger

        stack[-1]   : op_older / op_younger
        stack[-2]   : filemask value
        stack[-3]   : pattern
        stack[-4]   : reference filename


*/

#include "builtin.ih"

static  int accept(char const *lhs, char const *rhs) 
{
    return 1;
}

void b_makeList()
{
    int opcode = int_value(stack_top());    // op_hlt/op_younger/op_older
    
    char const *name = string_charp(stack_top() - 2);   // filemask string 

    listcons(eb_releaseReg());

    if (*name)                          /* if valid name.. */
    {
        char
            dir[MAX_PATHLEN],              /* filename, incl. path */
            fname[MAX_PATHLEN],
            ext[MAX_PATHLEN],
            newname[MAX_PATHLEN];

        unsigned attrib = int_value(stack_top() - 1); // attribute to match

                                        /* find a first name */
        char *namefound = rss_findFirst (name, attrib);

        rss_splitPath(name, dir, fname, ext);

        
        char const *refName = opcode == op_hlt ?
                                    0
                                :
                                    string_charp(stack_top() - 3);

        int (*include)(char const *lhs, char const *rhs) =
            opcode == op_hlt     ? accept :
            opcode == op_younger ? rss_younger :
                                   rss_older;
            
        while (namefound)               /* as long as that succeeds */
        {
                                        /* make a new path */
            rss_makePath (newname, dir, namefound, "");

            if ((*include)(newname, refName))   /// add accepted entries
                list_add_charPtr(&gb_reg, newname);

            namefound = rss_findNext();     /* determine new name */
        }
        list_sort(&gb_reg);
    }
}

