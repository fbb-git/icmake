/* #define msg

        A ListVariable has a
            ExprType type (e_list)
            TextData *data: a pointer to a allocated TextData, containing
                  nShared:    the share-count
                  
                    unsigned size: the number of strings, stored in the list
                    char **element: a pointer to pointers to allocated 
                                          NTBSs

        When the share count is 1 and the destructor is called, then
            size pointers at data->element are freed
            data->element is freed
            data is freed.
*/

/* #define msg
*/

#include "list.ih"

void listDestructor(ListVariable const *var)
{
    unsigned idx;

    if (var_decShared(var) == 0)
    {
        for (idx = l_size(var); idx--; )        /* free the NTBSs */
            free(l_element((Variable *)var)[idx]);

        free(l_element((Variable *)var));       /* free the char ** array */
        free(((Variable *)var)->data);          /* free the data block */
    }
}

