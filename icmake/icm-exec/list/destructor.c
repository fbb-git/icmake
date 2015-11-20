/* #define msg

        A ListVariable has a
            ExprType type (e_list)
            TextData *data: a pointer to a allocated TextData, containing
                  count:    the share-count
                  TextUnion ls.list:  the information about the text fields, 
                                being:
                          size: the number of strings, stored in the list
                          char **element: a pointer to pointers to allocated 
                                          NTBSs
        When the share count is 1 and the destructor is called, then
            ls.list.size pointers at ls.list.element are freed
            ls.list.element is freed
            data is freed.
*/

#include "list.ih"

void listDestructor(ListVariable const *var)
{
    size_t idx;

    if (var_decShared(var) == 0)
    {
        for (idx = l_size(var); idx--; )
            free(l_element((Variable *)var)[idx]);
    
        free(l_element((Variable *)var));
        free(((Variable *)var)->data);
    }
}

