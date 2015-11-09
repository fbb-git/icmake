#include "rss.ih"

int rss_younger(char const *lval, char const *rval)
{
    struct stat
        lbuf,
        rbuf;

    if (stat(lval, &lbuf))
        lbuf.st_mtime = 0;

    if (stat(rval, &rbuf))
        rbuf.st_mtime = 0;

   return lbuf.st_mtime > rbuf.st_mtime;
}
