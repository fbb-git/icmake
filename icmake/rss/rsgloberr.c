#include "rss.ih"

/* 
    glob() error handler
    returns 0: signal for glob to ignore the error
*/
int rs_globerr(char const *path, int errnr)
{
    return 0;
}
