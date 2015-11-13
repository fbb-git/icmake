/*
    return allocated string containing either `file' or `file.ext'
    If file exists, file is returned; otherwise if file.ext exists    
    it is returned, otherwise an error is written and execution stops.
*/

#include "icmake.ih"

char *accessFile(char const *file, char const *ext)
{
    char *ret;

    if (access(file, R_OK) == 0)        /* File exists as-is ?  */
        return rss_strdup(file);        /* return it            */

    ret = rss_changeExt(file, ext);     /* file.ext */

    if (access(ret, R_OK) != 0)         /* File.ext doesn't exist   */
        rss_error("can't read `%s' or `%s'", file, ret);
    
    return ret;
}

