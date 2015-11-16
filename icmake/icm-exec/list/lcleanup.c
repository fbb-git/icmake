#include "list.ih"

void l_cleanup(ListVariable *list, size_t toRemove)
{
    if (l_size(list) == toRemove) /* remove all ? */
    {
        listDestructor(list);   /* then wipe out the list */
        *list = *listcons();  /* and return a new, empty one */
        return;
    }

    {
                                             /* walk along all elements  */
        char **empty = l_element(list);
        char **end = empty + l_size(list);
        for ( ; empty != end; ++empty)   
        {
            char **used;
            if (*empty)                     /* next element if non-empty    */
                continue;
    
            used = empty + 1;           /* beyond the empty one: find used */
    
            for (; used != end && *used == 0; ++used)
                ;                           /* find the next one in use */
                
            if (used == end)                /* at the end */
                break;
    
            *empty = *used;                 /* swap `used' and `empty' */
            *used = 0;                  
        }
    }
    *l_sizePtr(list) -= toRemove;     /* reduce the list's size   */
}















