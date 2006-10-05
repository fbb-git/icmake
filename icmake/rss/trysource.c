/*
    return allocated string containing either `source' or `source.im'
    If source exists, source is returned; otherwise if source.im exisits    
    it is returned, otherwise source is returned nonetheless (but opening will
    fail, probably) 
*/

#include "icrss.h"


char *try_source(char const *source)
{
    char *ret;

    if (access(source, F_OK) == 0)      /* File exists as-is ?  */
        return xstrdup(source);         /* return it            */

    ret = xstrdup(change_ext(source, "im"));     /* file.im */

    return access(ret, F_OK) == 0 ?     /* File.im exists ?     */
        ret
    :
        xstrdup(source);                /* return original file     */
                                        /* but opening will fail    */     
}
