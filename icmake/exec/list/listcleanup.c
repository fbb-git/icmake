#include "list.ih"

void listcleanup(LISTVAR_ *list, size_t toRemove)
{
    if (size(list) == toRemove) /* remove all ? */
    {
        listDestructor(list);   /* then wipe out the list */
        *list = *listConstructor();  /* and return a new, empty one */
        return;
    }

    {
                                             /* walk along all elements  */
        char **empty = element(list);
        char **end = empty + size(list);
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
    size(list) -= toRemove;     /* reduce the list's size   */
}















